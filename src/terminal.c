/**
 * PLATOTermAmiga - A PLATO Terminal for the Commodore Amiga
 * Based on Steve Peltz's PAD
 *
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * terminal.c - Terminal state functions
 */


#include <string.h>
#include "terminal.h"
#include "screen.h"

#define true 1
#define false 0

/**
 * ASCII Features to return in Features
 */
#define ASC_ZFGT        0x01
#define ASC_ZPCKEYS     0x02
#define ASC_ZKERMIT     0x04
#define ASC_ZWINDOW     0x08

/**
 * protocol.c externals
 */
extern CharMem CurMem;
extern padBool TTY;
extern padBool ModeBold;
extern padBool Rotate;
extern padBool Reverse;
extern DispMode CurMode;
extern padBool FlowControl;

/**
 * screen.c externals
 */
extern unsigned char CharWide;
extern unsigned char CharHigh;
extern padPt TTYLoc;

extern unsigned char already_started;

static unsigned char char_data[]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
				  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

static unsigned char BTAB[]={0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01};
static unsigned char BTAB_5[]={0x08,0x10,0x10,0x20,0x20,0x40,0x80,0x80};
static unsigned char TAB_0_5[]={0x05,0x05,0x05,0x04,0x04,0x04,0x03,0x03,0x02,0x02,0x01,0x01,0x01,0x00,0x00,0x00};
static unsigned char TAB_0_5i[]={0x00,0x00,0x00,0x01,0x01,0x01,0x02,0x02,0x03,0x03,0x04,0x04,0x04,0x05,0x05,0x05};

static unsigned char TAB_0_4[]={0x00,0x00,0x01,0x02,0x02,0x03,0x03,0x04};

static unsigned char PIX_THRESH[]={0x03,0x02,0x03,0x03,0x02,
				   0x03,0x02,0x03,0x03,0x02,
				   0x02,0x01,0x02,0x02,0x01,
				   0x02,0x01,0x02,0x02,0x01,
				   0x03,0x02,0x03,0x03,0x02,
				   0x03,0x02,0x03,0x03,0x02};

static unsigned char PIX_WEIGHTS[]={0x00,0x00,0x00,0x00,0x00,
				    0x00,0x00,0x00,0x00,0x00,
				    0x00,0x00,0x00,0x00,0x00,
				    0x00,0x00,0x00,0x00,0x00,
				    0x00,0x00,0x00,0x00,0x00,
				    0x00,0x00,0x00,0x00,0x00};

static unsigned char TAB_0_25[]={0,5,10,15,20,25};

static unsigned char pix_cnt;
static unsigned char curr_word;
static unsigned char u,v;
extern unsigned char* fontm23;

/**
 * Initialize terminal state
 */
void terminal_init(void)
{
  terminal_set_tty();
}

/**
 * terminal_initial_position()
 * Set terminal initial position after splash screen.
 */
void terminal_initial_position(void)
{
  TTYLoc.x=0;
  TTYLoc.y=320;
}

/**
 * terminal_set_tty(void) - Switch to TTY mode
 */
void terminal_set_tty(void)
{
  if (already_started)
    screen_clear();
  TTY=true;
  ModeBold=padF;
  Rotate=padF;
  Reverse=padF;
  CurMem=M0;
  CurMode=ModeRewrite;
  CharWide=8;
  CharHigh=16;
  TTYLoc.x = 0;
  TTYLoc.y = 495;
}

/**
 * terminal_set_plato(void) - Switch to PLATO mode
 */
void terminal_set_plato(void)
{
  TTY=false;
  screen_clear();
  CharWide=8;
  CharHigh=16;
}

/**
 * terminal_get_features(void) - Inquire about terminal ASCII features
 */
unsigned char terminal_get_features(void)
{
  return ASC_ZFGT; /* This terminal can do Fine Grained Touch (FGT) */
}

/**
 * terminal_get_type(void) - Return the appropriate terminal type
 */
unsigned char terminal_get_type(void)
{
  return 12; /* ASCII terminal type */
}

/**
 * terminal_get_subtype(void) - Return the appropriate terminal subtype
 */
unsigned char terminal_get_subtype(void)
{
  return 1; /* ASCII terminal subtype IST-III */
}

/**
 * terminal_get_load_file(void) - Return the appropriate terminal loadfile (should just be 0)
 */
unsigned char terminal_get_load_file(void)
{
  return 0; /* This terminal does not load its resident from the PLATO system. */
}

/**
 * terminal_get_configuration(void) - Return the terminal configuration
 */
unsigned char terminal_get_configuration(void)
{
  return 0x40; /* Touch panel is present. */
}

/**
 * terminal_get_char_address(void) - Return the base address of the character set.
 */
unsigned short terminal_get_char_address(void)
{
  return 0x3000; /* What the? Shouldn't this be 0x3800? */
}

/**
 * terminal_mem_read - Read a byte of program memory.
 * not needed for our terminal, but must
 * be decoded.
 */
padByte terminal_mem_read(padWord addr)
{
  return (0xFF);
}

/**
 * terminal_mem_load - Write a byte to non-character memory.
 * not needed for our terminal, but must be decoded.
 */
void terminal_mem_load(padWord addr, padWord value)
{
  /* Not Implemented */
}

/**
 * Mode5, 6, and 7 are basically stubbed.
 */
void terminal_mode_5(padWord value)
{
}

void terminal_mode_6(padWord value)
{
}

void terminal_mode_7(padWord value)
{
}

/**
 * terminal_ext_allow - External Input allowed. Not implemented.
 */
void terminal_ext_allow(padBool allow)
{
  /* Not Implemented */
}

/**
 * terminal_set_ext_in - Set which device to get input from.
 * Not implemented
 */
void terminal_set_ext_in(padWord device)
{
}

/**
 * terminal_set_ext_out - Set which device to send external data to.
 * Not implemented
 */
void terminal_set_ext_out(padWord device)
{
}

/**
 * terminal_ext_in - get an external input from selected device.
 * Not implemented.
 */
padByte terminal_ext_in(void)
{
  return 0;
}

/**
 * terminal_ext_out - Send an external output to selected device
 * Not implemented.
 */
void terminal_ext_out(padByte value)
{
}

void terminal_char_load(padWord charNum, charData theChar)
{
  memset(char_data,0,sizeof(char_data));

  for (curr_word=0;curr_word<8;curr_word++)
    {
      for (u=16; u-->0; )
	{
	  if (theChar[curr_word] & 1<<u)
	    {
	      char_data[u^0x0F&0x0F]|=BTAB[curr_word];
	    }
	}
    }
  
  /* fontm23[(charNum*12)+0]=char_data[0]; */
  /* fontm23[(charNum*12)+128]=char_data[1]; */
  /* fontm23[(charNum*12)+256]=char_data[2]|char_data[3]; */
  /* fontm23[(charNum*12)+384]=char_data[4]; */
  /* fontm23[(charNum*12)+512]=char_data[5]; */
  /* fontm23[(charNum*12)+640]=char_data[6]|char_data[7]; */
  /* fontm23[(charNum*12)+768]=char_data[8]; */
  /* fontm23[(charNum*12)+896]=char_data[9]; */
  /* fontm23[(charNum*12)+1024]=char_data[10]|char_data[11]; */
  /* fontm23[(charNum*12)+1152]=char_data[12]; */
  /* fontm23[(charNum*12)+1280]=char_data[13]; */
  /* fontm23[(charNum*12)+1408]=char_data[14]|char_data[15]; */
}

/**
 * terminal_status - Indicate whether we are in TTY or PLATO
 * mode for the status display.
 */
char* terminal_status(void)
{
  if (TTY)
    return "TTY  ";
  else
    return "PLATO";
}

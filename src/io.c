/**
 * PLATOTermAmiga - A PLATO Terminal for the Commodore Amiga
 * Based on Steve Peltz's PAD
 *
 * Author: Thomas Cherryhomes <thom.cherryhomes at gmail dot com>
 *
 * io.h - Input/output functions (serial/ethernet)
 */

#include <clib/alib_protos.h>
#include <clib/exec_protos.h>
#include <exec/memory.h>
#include <exec/ports.h>
#include <devices/serial.h>

#include "io.h"

extern void done(void);

typedef struct _MySer
{
  struct MsgPort *writeport;  /** when the writeio is done, reply goes here **/
  struct MsgPort *readport;   /** ibid for the readio **/
  struct IOExtSer *readio, *writeio;
  UBYTE writedata[2048], readdata[2048];  /** data space **/
} MySer;

MySer* ms;

/**
 * io_init() - Set-up the I/O
 */
void io_init(void)
{
  ms = (MySer *) AllocMem(sizeof(MySer), MEMF_PUBLIC|MEMF_CLEAR);
  if (!ms)
    done();

  ms->readport=CreatePort(NULL,0L);
  ms->writeport=CreatePort(NULL,0L);
  if (!ms->readport || !ms->writeport)
    done();

  ms->readio  = (struct IOExtSer *)CreateExtIO(ms->readport,  sizeof(struct IOExtSer));
  ms->writeio = (struct IOExtSer *)CreateExtIO(ms->writeport, sizeof(struct IOExtSer));
  if (!ms->readio || !ms->writeio)
    done();

  /* Serial port should be initialized, and open, at this point. */
  /* TBD: do baud rate setting */
}

/**
 * io_send_byte(b) - Send specified byte out
 */
void io_send_byte(unsigned char b)
{
}

/**
 * io_main() - The IO main loop
 */
void io_main(void)
{
  
}

/**
 * io_done() - Called to close I/O
 */
void io_done(void)
{
  if (ms)
    {
      CloseDevice((struct IORequest *)ms->readio);
      CloseDevice((struct IORequest *)ms->writeio);
      DeleteExtIO((struct IORequest *)ms->writeio);
      DeleteExtIO((struct IORequest *)ms->readio);
      DeletePort(ms->writeport);
      DeletePort(ms->readport);
      FreeMem(ms,sizeof(MySer));
    }
}

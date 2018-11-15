/**
 * key.h
 * Keyboard Translation Tables
 */

#include "plato_key.h"

#ifndef KEY_H
#define KEY_H

/**
 *
 * KEY_H generated by mk_ascii_key_h.c
 */


unsigned char key_to_pkey[]={
    PKEY_NOKEY, /* 0x00 NUL */
    PKEY_ANS, /* 0x01 CTRL-A */
    PKEY_BACK, /* 0x02 CTRL-B */
    PKEY_COPY, /* 0x03 CTRL-C */
    PKEY_DATA, /* 0x04 CTRL-D */
    PKEY_EDIT, /* 0x05 CTRL-E */
    PKEY_FONT, /* 0x06 CTRL-F */
    PKEY_DIVIDE, /* 0x07 CTRL-G */
    PKEY_ERASE, /* 0x08 CTRL-H */
    PKEY_HELP, /* 0x09 CTRL-I */
    PKEY_NOKEY, /* 0x0a CTRL-J */
    PKEY_NOKEY, /* 0x0b CTRL-K */
    PKEY_LAB, /* 0x0c CTRL-L */
    PKEY_NEXT, /* 0x0d CTRL-M */
    PKEY_NEXT, /* 0x0e CTRL-N */
    PKEY_NOKEY, /* 0x0f CTRL-O */
    PKEY_SUPER, /* 0x10 CTRL-P */
    PKEY_SQUARE, /* 0x11 CTRL-Q */
    PKEY_ERASE, /* 0x12 CTRL-R */
    PKEY_STOP, /* 0x13 CTRL-S */
    PKEY_TERM, /* 0x14 CTRL-T */
    PKEY_NOKEY, /* 0x15 CTRL-U */
    PKEY_NOKEY, /* 0x16 CTRL-V */
    PKEY_NOKEY, /* 0x17 CTRL-W */
    PKEY_MULTIPLY, /* 0x18 CTRL-X */
    PKEY_SUB, /* 0x19 CTRL-Y */
    PKEY_NOKEY, /* 0x1a CTRL-Z */
    PKEY_NOKEY, /* 0x1b ESC */
    PKEY_NOKEY, /* 0x1c */
    PKEY_NOKEY, /* 0x1d */
    PKEY_NOKEY, /* 0x1e */
    PKEY_NOKEY, /* 0x1f */
    PKEY_SPACE, /* 0x20 SPACE */
    PKEY_EXCLAMATION, /* 0x21 ! */
    PKEY_QUOTE, /* 0x22 " */
    PKEY_POUND, /* 0x23 # */
    PKEY_DOLLAR, /* 0x24 $ */
    PKEY_PERCENT, /* 0x25 % */
    PKEY_AMPERSAND, /* 0x26 & */
    PKEY_APOSTROPHE, /* 0x27 ' */
    PKEY_PARENTHESIS_LEFT, /* 0x28 ( */
    PKEY_PARENTHESIS_RIGHT, /* 0x29 ) */
    PKEY_ASTERISK, /* 0x2a * */
    PKEY_PLUS, /* 0x2b + */
    PKEY_COMMA, /* 0x2c , */
    PKEY_MINUS, /* 0x2d - */
    PKEY_PERIOD, /* 0x2e . */
    PKEY_SLASH, /* 0x2f / */
    PKEY_0, /* 0x30 0 */
    PKEY_1, /* 0x31 1 */
    PKEY_2, /* 0x32 2 */
    PKEY_3, /* 0x33 3 */
    PKEY_4, /* 0x34 4 */
    PKEY_5, /* 0x35 5 */
    PKEY_6, /* 0x36 6 */
    PKEY_7, /* 0x37 7 */
    PKEY_8, /* 0x38 8 */
    PKEY_9, /* 0x39 9 */
    PKEY_COLON, /* 0x3a : */
    PKEY_SEMICOLON, /* 0x3b ; */
    PKEY_LESS_THAN, /* 0x3c < */
    PKEY_EQUALS, /* 0x3d = */
    PKEY_GREATER_THAN, /* 0x3e > */
    PKEY_QUESTION_MARK, /* 0x3f ? */
    PKEY_AT, /* 0x40 @ */
    PKEY_A, /* 0x41 A */
    PKEY_B, /* 0x42 B */
    PKEY_C, /* 0x43 C */
    PKEY_D, /* 0x44 D */
    PKEY_E, /* 0x45 E */
    PKEY_F, /* 0x46 F */
    PKEY_G, /* 0x47 G */
    PKEY_H, /* 0x48 H */
    PKEY_I, /* 0x49 I */
    PKEY_J, /* 0x4a J */
    PKEY_K, /* 0x4b K */
    PKEY_L, /* 0x4c L */
    PKEY_M, /* 0x4d M */
    PKEY_N, /* 0x4e N */
    PKEY_O, /* 0x4f O */
    PKEY_P, /* 0x50 P */
    PKEY_Q, /* 0x51 Q */
    PKEY_R, /* 0x52 R */
    PKEY_S, /* 0x53 S */
    PKEY_T, /* 0x54 T */
    PKEY_U, /* 0x55 U */
    PKEY_V, /* 0x56 V */
    PKEY_W, /* 0x57 W */
    PKEY_X, /* 0x58 X */
    PKEY_Y, /* 0x59 Y */
    PKEY_Z, /* 0x5a Z */
    PKEY_BRACKET_LEFT, /* 0x5b [ */
    PKEY_SLASH, /* 0x5c / */
    PKEY_BRACKET_RIGHT, /* 0x5d ] */
    PKEY_CIRCUMFLEX, /* 0x5e ^ */
    PKEY_UNDERSCORE, /* 0x5f _ */
    PKEY_GRAVE, /* 0x60 ` */
    PKEY_a, /* 0x61 a */
    PKEY_b, /* 0x62 b */
    PKEY_c, /* 0x63 c */
    PKEY_d, /* 0x64 d */
    PKEY_e, /* 0x65 e */
    PKEY_f, /* 0x66 f */
    PKEY_g, /* 0x67 g */
    PKEY_h, /* 0x68 h */
    PKEY_i, /* 0x69 i */
    PKEY_j, /* 0x6a j */
    PKEY_k, /* 0x6b k */
    PKEY_l, /* 0x6c l */
    PKEY_m, /* 0x6d m */
    PKEY_n, /* 0x6e n */
    PKEY_o, /* 0x6f o */
    PKEY_p, /* 0x70 p */
    PKEY_q, /* 0x71 q */
    PKEY_r, /* 0x72 r */
    PKEY_s, /* 0x73 s */
    PKEY_t, /* 0x74 t */
    PKEY_u, /* 0x75 u */
    PKEY_v, /* 0x76 v */
    PKEY_w, /* 0x77 w */
    PKEY_x, /* 0x78 x */
    PKEY_y, /* 0x79 y */
    PKEY_z, /* 0x7a z */
    PKEY_LEFT_CURLY_BRACE, /* 0x7b { */
    PKEY_BAR, /* 0x7c | */
    PKEY_RIGHT_CURLY_BRACE, /* 0x7d } */
    PKEY_TILDE, /* 0x7e ~ */
    PKEY_ERASE, /* 0x7f DEL */
};

unsigned char ctrl_shift_key_to_pkey[]={
    PKEY_NOKEY, /* 0x00 NUL */
    PKEY_NOKEY, /* 0x01 CTRL-A */
    PKEY_BACK1, /* 0x02 CTRL-B */
    PKEY_COPY1, /* 0x03 CTRL-C */
    PKEY_DATA1, /* 0x04 CTRL-D */
    PKEY_EDIT1, /* 0x05 CTRL-E */
    PKEY_NOKEY, /* 0x06 CTRL-F */
    PKEY_NOKEY, /* 0x07 CTRL-G */
    PKEY_HELP1, /* 0x08 CTRL-H */
    PKEY_NOKEY, /* 0x09 CTRL-I */
    PKEY_NOKEY, /* 0x0a CTRL-J */
    PKEY_NOKEY, /* 0x0b CTRL-K */
    PKEY_LAB1, /* 0x0c CTRL-L */
    PKEY_NEXT1, /* 0x0d CTRL-M */
    PKEY_NEXT1, /* 0x0e CTRL-N */
    PKEY_NOKEY, /* 0x0f CTRL-O */
    PKEY_SUPER1, /* 0x10 CTRL-P */
    PKEY_ACCESS, /* 0x11 CTRL-Q */
    PKEY_ERASE1, /* 0x12 CTRL-R */
    PKEY_STOP1, /* 0x13 CTRL-S */
    PKEY_TERM, /* 0x14 CTRL-T */
    PKEY_NOKEY, /* 0x15 CTRL-U */
    PKEY_NOKEY, /* 0x16 CTRL-V */
    PKEY_NOKEY, /* 0x17 CTRL-W */
    PKEY_NOKEY, /* 0x18 CTRL-X */
    PKEY_SUB1, /* 0x19 CTRL-Y */
    PKEY_NOKEY, /* 0x1a CTRL-Z */
    PKEY_NOKEY, /* 0x1b ESC */
    PKEY_NOKEY, /* 0x1c */
    PKEY_NOKEY, /* 0x1d */
    PKEY_NOKEY, /* 0x1e */
    PKEY_NOKEY, /* 0x1f */
    PKEY_NOKEY, /* 0x20 SPACE */
    PKEY_NOKEY, /* 0x21 ! */
    PKEY_NOKEY, /* 0x22 " */
    PKEY_NOKEY, /* 0x23 # */
    PKEY_NOKEY, /* 0x24 $ */
    PKEY_NOKEY, /* 0x25 % */
    PKEY_NOKEY, /* 0x26 & */
    PKEY_NOKEY, /* 0x27 ' */
    PKEY_NOKEY, /* 0x28 ( */
    PKEY_NOKEY, /* 0x29 ) */
    PKEY_NOKEY, /* 0x2a * */
    PKEY_NOKEY, /* 0x2b + */
    PKEY_NOKEY, /* 0x2c , */
    PKEY_NOKEY, /* 0x2d - */
    PKEY_NOKEY, /* 0x2e . */
    PKEY_NOKEY, /* 0x2f / */
    PKEY_NOKEY, /* 0x30 0 */
    PKEY_NOKEY, /* 0x31 1 */
    PKEY_NOKEY, /* 0x32 2 */
    PKEY_NOKEY, /* 0x33 3 */
    PKEY_NOKEY, /* 0x34 4 */
    PKEY_NOKEY, /* 0x35 5 */
    PKEY_NOKEY, /* 0x36 6 */
    PKEY_NOKEY, /* 0x37 7 */
    PKEY_NOKEY, /* 0x38 8 */
    PKEY_NOKEY, /* 0x39 9 */
    PKEY_NOKEY, /* 0x3a : */
    PKEY_NOKEY, /* 0x3b ; */
    PKEY_NOKEY, /* 0x3c < */
    PKEY_NOKEY, /* 0x3d = */
    PKEY_NOKEY, /* 0x3e > */
    PKEY_NOKEY, /* 0x3f ? */
    PKEY_NOKEY, /* 0x40 @ */
    PKEY_NOKEY, /* 0x41 A */
    PKEY_NOKEY, /* 0x42 B */
    PKEY_NOKEY, /* 0x43 C */
    PKEY_NOKEY, /* 0x44 D */
    PKEY_NOKEY, /* 0x45 E */
    PKEY_NOKEY, /* 0x46 F */
    PKEY_NOKEY, /* 0x47 G */
    PKEY_NOKEY, /* 0x48 H */
    PKEY_NOKEY, /* 0x49 I */
    PKEY_NOKEY, /* 0x4a J */
    PKEY_NOKEY, /* 0x4b K */
    PKEY_NOKEY, /* 0x4c L */
    PKEY_NOKEY, /* 0x4d M */
    PKEY_NOKEY, /* 0x4e N */
    PKEY_NOKEY, /* 0x4f O */
    PKEY_NOKEY, /* 0x50 P */
    PKEY_NOKEY, /* 0x51 Q */
    PKEY_NOKEY, /* 0x52 R */
    PKEY_NOKEY, /* 0x53 S */
    PKEY_NOKEY, /* 0x54 T */
    PKEY_NOKEY, /* 0x55 U */
    PKEY_NOKEY, /* 0x56 V */
    PKEY_NOKEY, /* 0x57 W */
    PKEY_NOKEY, /* 0x58 X */
    PKEY_NOKEY, /* 0x59 Y */
    PKEY_NOKEY, /* 0x5a Z */
    PKEY_NOKEY, /* 0x5b [ */
    PKEY_NOKEY, /* 0x5c / */
    PKEY_NOKEY, /* 0x5d ] */
    PKEY_NOKEY, /* 0x5e ^ */
    PKEY_NOKEY, /* 0x5f _ */
    PKEY_NOKEY, /* 0x60 ` */
    PKEY_NOKEY, /* 0x61 a */
    PKEY_NOKEY, /* 0x62 b */
    PKEY_NOKEY, /* 0x63 c */
    PKEY_NOKEY, /* 0x64 d */
    PKEY_NOKEY, /* 0x65 e */
    PKEY_NOKEY, /* 0x66 f */
    PKEY_NOKEY, /* 0x67 g */
    PKEY_NOKEY, /* 0x68 h */
    PKEY_NOKEY, /* 0x69 i */
    PKEY_NOKEY, /* 0x6a j */
    PKEY_NOKEY, /* 0x6b k */
    PKEY_NOKEY, /* 0x6c l */
    PKEY_NOKEY, /* 0x6d m */
    PKEY_NOKEY, /* 0x6e n */
    PKEY_NOKEY, /* 0x6f o */
    PKEY_NOKEY, /* 0x70 p */
    PKEY_NOKEY, /* 0x71 q */
    PKEY_NOKEY, /* 0x72 r */
    PKEY_NOKEY, /* 0x73 s */
    PKEY_NOKEY, /* 0x74 t */
    PKEY_NOKEY, /* 0x75 u */
    PKEY_NOKEY, /* 0x76 v */
    PKEY_NOKEY, /* 0x77 w */
    PKEY_NOKEY, /* 0x78 x */
    PKEY_NOKEY, /* 0x79 y */
    PKEY_NOKEY, /* 0x7a z */
    PKEY_NOKEY, /* 0x7b { */
    PKEY_NOKEY, /* 0x7c | */
    PKEY_NOKEY, /* 0x7d } */
    PKEY_NOKEY, /* 0x7e ~ */
};

#endif /* KEY_H */

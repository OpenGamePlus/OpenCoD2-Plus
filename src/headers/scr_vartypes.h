#ifndef COD2_SCR_VARTYPES_H
#define COD2_SCR_VARTYPES_H

/* The object types Scr_GetPointerType returns, for the engine's game code.
 * OpenCoD2-Plus Server's VM adds VAR_INT64 after VAR_INTEGER, which moves every
 * type after it up by one from 1.3's (0x14..0x17); src/compat/script_missing.cpp
 * checks these against its enum. The types Scr_GetType returns for values, up
 * to VAR_INTEGER (6), are the same in both. */
#define COD2_VAR_DEAD_ENTITY 21
#define COD2_VAR_ENTITY      22
#define COD2_VAR_ARRAY       23
#define COD2_VAR_DEAD_THREAD 24

#endif

/*
 *  macro for preprocessor
 */

#ifndef MCR_H
#define MCR_H

#ifndef NDEBUG
#include <stdio.h>    /* FILE */
#endif    /* !NDEBUG */

#include "lex.h"


extern const lex_pos_t *mcr_mpos;    /* locus for diagnostics */


int mcr_redef(const char *);
void mcr_del(const char *, const lex_pos_t *);
void mcr_cmd(int, const char *);
lex_t *mcr_define(int, lex_t *(*)(void), const lex_pos_t *);
void mcr_eadd(const char *);
void mcr_edel(const char *);
void mcr_emeet(const char *);
int mcr_expand(lex_t *, const lex_pos_t *);
void mcr_init(void);
void mcr_free(void);
#ifndef NDEBUG
void mcr_eprint(FILE *);
#endif    /* !NDEBUG */


/* adds or removes command line macro definitions */
#define mcr_addcmd(a) (mcr_cmd(0, (a)))
#define mcr_delcmd(a) (mcr_cmd(1, (a)))


#endif    /* MCR_H */

/* end of mcr.h */

/*
 *  lexical analyzer for preprocessor
 */

#ifndef LEX_H
#define LEX_H

#include "common.h"
#include "lmap.h"


/* token */
typedef struct lex_t {
    short id;             /* token code */
    const char *spell;    /* text spelling */
    const lmap_t *pos;    /* token locus */
} lex_t;

/* token codes */
enum {
#define xx(a, b, c, d, e, f, g, h) LEX_##a = b,
#define yy(a, b, c, d, e, f, g, h)
#include "xtoken.h"
    LEX_LAST
};


lex_t *lex_nexttok(void);


#endif    /* LEX_H */

/* end of lex.h */
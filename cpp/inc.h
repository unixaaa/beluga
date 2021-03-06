/*
 *  include for preprocessing
 */

#ifndef INC_H
#define INC_H

#include <stdio.h>    /* FILE */

#include "cond.h"
#include "lex.h"
#include "lxl.h"


/* #include list element */
typedef struct inc_t {
    FILE *fptr;                    /* file pointer */
    const char *f;                 /* in_cpos.g.f */
    unsigned long y;               /* in_cpos.g.y */
    const char *mf;                /* in_cpos.mf */
    unsigned long my;              /* in_cpos.my */
    const unsigned char *limit,    /* in_limit */
                        *line,     /* in_line */
                        *cp;       /* in_cp */
    const char *fpath;             /* full path of current file */
    unsigned printed: 1;           /* true if already printed */
    cond_t *cond;                  /* context for conditional inclusion */
    int mgstate;                   /* mg_state */
    const char *mgname;            /* mg_name */
} inc_t;


extern inc_t **inc_list;         /* #include list */
extern const char *inc_fpath;    /* full path of current file; hash string */


void inc_add(const char *, int);
void inc_init(void);
void inc_free(void);
int inc_start(const char *, const lex_pos_t *);
void inc_push(FILE *);
FILE *inc_pop(FILE *);
int inc_isffile(void);
int inc_system(int);


#endif    /* INC_H */

/* end of inc.h */

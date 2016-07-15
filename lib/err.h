/*
 *  error handling
 */

#ifndef ERR_H
#define ERR_H

#include <cbl/except.h>    /* except_t */

#include "lmap.h"


/* error codes */
enum {
#define xx(a, b, c, d) ERR_##a,
#define yy(a, b, c, d) ERR_##a,
#include "xerror.h"
    ERR_LAST
};


extern int err_lim;                   /* # of allowed errors before stop */
extern const except_t err_except;     /* exception for too many errors */


void err_issuel(const char *, int, ...);


#endif    /* ERR_H */

/* end of err.h */
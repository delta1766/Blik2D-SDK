/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include BLIK_OPENSSL_V_openssl__err_h //original-code:<openssl/err.h>
#include BLIK_OPENSSL_V_openssl__rand_h //original-code:<openssl/rand.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_RAND,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_RAND,0,reason)

static ERR_STRING_DATA RAND_str_functs[] = {
    {ERR_FUNC(RAND_F_RAND_BYTES), "RAND_bytes"},
    {0, NULL}
};

static ERR_STRING_DATA RAND_str_reasons[] = {
    {ERR_REASON(RAND_R_PRNG_NOT_SEEDED), "PRNG not seeded"},
    {0, NULL}
};

#endif

int ERR_load_RAND_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(RAND_str_functs[0].error) == NULL) {
        ERR_load_strings(0, RAND_str_functs);
        ERR_load_strings(0, RAND_str_reasons);
    }
#endif
    return 1;
}

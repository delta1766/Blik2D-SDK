/*
 * Copyright 2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL licenses, (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * https://www.openssl.org/source/license.html
 * or in the file LICENSE in the source distribution.
 */

/*
 * Test configuration parsing.
 */

#include BLIK_OPENSSL_V_openssl__conf_h //original-code:<openssl/conf.h>
#include "fuzzer.h"

int FuzzerInitialize(int *argc, char ***argv) {
    return 1;
}

int FuzzerTestOneInput(const uint8_t *buf, size_t len) {
    CONF *conf;
    BIO *in;
    long eline;

    if (len == 0)
        return 0;

    conf = NCONF_new(NULL);
    in = BIO_new(BIO_s_mem());
    OPENSSL_assert((size_t)BIO_write(in, buf, len) == len);
    NCONF_load_bio(conf, in, &eline);
    NCONF_free(conf);
    BIO_free(in);

    return 0;
}

/* ====================================================================
 * Copyright (c) 2001 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

#ifndef HEADER_HWCRHK_ERR_H
# define HEADER_HWCRHK_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
static void ERR_load_HWCRHK_strings(void);
static void ERR_unload_HWCRHK_strings(void);
static void ERR_HWCRHK_error(int function, int reason, char *file, int line);
# define HWCRHKerr(f,r) ERR_HWCRHK_error((f),(r),OPENSSL_FILE,OPENSSL_LINE)

/* Error codes for the HWCRHK functions. */

/* Function codes. */
# define HWCRHK_F_HWCRHK_CTRL                             100
# define HWCRHK_F_HWCRHK_FINISH                           101
# define HWCRHK_F_HWCRHK_GET_PASS                         102
# define HWCRHK_F_HWCRHK_INIT                             103
# define HWCRHK_F_HWCRHK_INSERT_CARD                      104
# define HWCRHK_F_HWCRHK_LOAD_PRIVKEY                     105
# define HWCRHK_F_HWCRHK_LOAD_PUBKEY                      106
# define HWCRHK_F_HWCRHK_BN_MOD_EXP                       107
# define HWCRHK_F_HWCRHK_RAND_BYTES                       108
# define HWCRHK_F_HWCRHK_RSA_MOD_EXP                      109
# define HWCRHK_F_BIND_HELPER                             110
# define HWCRHK_F_HWCRHK_MUTEX_INIT                       111

/* Reason codes. */
# define HWCRHK_R_ALREADY_LOADED                          100
# define HWCRHK_R_BIO_WAS_FREED                           101
# define HWCRHK_R_CHIL_ERROR                              102
# define HWCRHK_R_CTRL_COMMAND_NOT_IMPLEMENTED            103
# define HWCRHK_R_DSO_FAILURE                             104
# define HWCRHK_R_MISSING_KEY_COMPONENTS                  105
# define HWCRHK_R_NOT_INITIALISED                         106
# define HWCRHK_R_NOT_LOADED                              107
# define HWCRHK_R_NO_CALLBACK                             108
# define HWCRHK_R_NO_KEY                                  109
# define HWCRHK_R_PRIVATE_KEY_ALGORITHMS_DISABLED         110
# define HWCRHK_R_REQUEST_FAILED                          111
# define HWCRHK_R_REQUEST_FALLBACK                        112
# define HWCRHK_R_UNIT_FAILURE                            113

#ifdef  __cplusplus
}
#endif
#endif

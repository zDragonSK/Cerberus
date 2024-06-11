/*
  Cerberus Header
  By: zDragonSK
 */
#include <stdlib.h>
#ifndef _CERBERUS_H
#define _CERBERUS_H

/* Encript a keyword with single-tag */
int encript (const char *keyword, const char *keysimple);
/* Encript a keyword without single-tag */
int l_encript (const char *keyword);
/* Swap a hash */
void swap(unsigned char *sha256_hash, const unsigned char *md5_hash, const char *keysimple);
#endif

/*
  Cerberus Header
  By: zDragonSK
 */
#include <stdlib.h>
#ifndef _CERBERUS_H
#define _CERBERUS_H

/* Encript a keyword with single-tag */
int hash (const char *password, const char *tag, const int size);
/* Encript a keyword without single-tag */
int legacyHasher (const char *password);
/* Swap a hash */
void swap (unsigned char *sha256Key, const unsigned char *sha256Tag, const char *tag);
#endif

#include "lib/cerberus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

/* Encript a simple word */
int encript (const char *keyword, const char *keysimple){
  unsigned char *hash;
  hash = SHA256((const unsigned char *)keyword, strlen(keyword), NULL);
  
  for (register int x=0; x<strlen(keysimple); x++)
    if (keysimple[x]) hash[x] = keysimple[x];
  printf("Chave: %s\nPasse: %s\nHash: ", keyword, keysimple);
  
  for (register int y=0; y<32; y++)
    printf("%02x", hash[y]);
  printf("\n");
  
  return 0;
}

/* Legacy Encripter */
int l_encript(const char *keyword) {
  unsigned char *hash = SHA256((const unsigned char *)keyword, strlen(keyword), NULL);
  printf("Chave: %s\nHash: ", keyword);
  for (register int x=0; x<32; x++)
    printf("%02x", hash[x]);
  printf("\n");
  return 0;
}

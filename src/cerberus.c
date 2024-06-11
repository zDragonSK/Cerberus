#include "lib/cerberus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>
#include <openssl/md5.h>

/* Encript a word */
int encript (const char *keyword, const char *keysimple){
  unsigned char *hash = SHA256((const unsigned char *)keyword, strlen(keyword), NULL);
  unsigned char *m_hash = MD5((const unsigned char *)keysimple, strlen(keysimple), NULL);
  if (!hash || !m_hash) return -1;

  swap(hash, m_hash, keysimple);
  printf("Key: %s\nTag: %s\nHash: ", keyword, keysimple);
  for (register int y=0; y<32; y++)
    printf("%02x", hash[y]);

  printf("\n");
  return 0;
}

/* Legacy Encripter */
int l_encript (const char *keyword) {
  unsigned char *hash = SHA256((const unsigned char *)keyword, strlen(keyword), NULL);
  if (!hash) return -1;

  printf("Key: %s\nHash: ", keyword);
  for (register int x=0; x<32; x++)
    printf("%02x", hash[x]);
  printf("\n");

  return 0;
}

/* Modify SHA256 hash using MD5 */
void swap(unsigned char *sha256_hash, const unsigned char *md5_hash, const char *keysimple) {
  size_t len = strlen(keysimple);
  for (size_t i = 0; i < len; i++) {
    size_t position = keysimple[i] % 32;
    sha256_hash[position] = md5_hash[i % 16];
  }
  for (size_t i=0; i<len; i++){
    size_t position = keysimple[i] % 21;
    sha256_hash[position] = md5_hash[i % 16];
  }
}

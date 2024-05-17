/*

  Hash SHA256 keys
  By: zDragonSK

OBS: Esse código é uma merda, foda-se!
*/
#include <openssl/sha.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *args[]) {
  unsigned char *hash;

  if (argc < 2) {
    fprintf(stderr, "Use: %s <string>\n", args[0]);
    return -1;
  }
  printf("Key: %s\nHash: ", args[1]);
  hash = SHA256((const unsigned char *)args[1], strlen(args[1]), NULL);

  for (register int i = 0; i < 32; i++)
    printf("%02x", hash[i]);
  printf("\n");

  return 0;
}


/*
 Cerberus - Password-generator
 Encript a password with keys and words
 By: zDragonSK
*/
#include "lib/cerberus.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 3) {
    fprintf(stderr, "[X] Bad Arguments!\f%s [keycode] [keypass]\n", argv[0]);
    return -1;
  }
  if (!(strcmp(argv[2], "-o")))
    legacyHasher(argv[1]);
  else
    hash(argv[1], argv[2]);
  return 0;
}

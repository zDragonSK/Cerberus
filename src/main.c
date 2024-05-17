/*
 Cerberus - Password-manager
 Encript a password with keys and words
 By: zDragonSK

 ./main keyhere Discord
*/
#include "lib/cerberus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  /* Check arguments */
  if (argc < 3) {
    fprintf(stderr, "[X] Bad Arguments!\f%s [keycode] [keypass]\n", argv[0]);
    return -1;
  }
  if (!(strcmp(argv[2], "-o")))
    l_encript(argv[1]);
  else
    encript(argv[1], argv[2]);
  return 0;
}

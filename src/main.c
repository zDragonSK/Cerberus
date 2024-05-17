#include "lib/cerberus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
  if (argc < 3) {
    fprintf(stderr, "Error: Bad Arguments!\f%s [keycode] [keypass]\n", argv[0]);
    return -1;
  }

  if (argv[3]) {
    if (strcmp(argv[3], "-o") == 0 || strcmp(argv[3], "--old") == 0)
      l_encript(argv[1]);
  } else {
    if (encript(argv[1], argv[2]) != 0) {
      fprintf(stderr, "Error: Bad hash!\n");
      return -1;
    }
  }
  return 0;
}

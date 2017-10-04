#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "fsUtil.h"

int main(int argc, char **argv) {
  if (argc >= 4) {
    printf("%s\n", *++argv);
    FILE *in = _readFile(*argv);
    if (in) {
      printf("found the file\n");
      printf("reading the file\n");
      char **lines = _readAllLines(in);
      while(*lines) {
        printf("%s\n", *lines++);
      }
      return 0;
    } else {
      printf("unable to read file: %s\n", *argv);
      return 3;
    }
  } else {
    printf("usage: %s infile -o outfile\n", --*argv);
  }


  return 0;
}

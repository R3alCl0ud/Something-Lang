#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>
#include "fsUtil.h"

bool checkEndianness();

int main(int argc, char **argv) {
  if (argc >= 4) {
    bool bigEndian = checkEndianness();
    int n = 1;
    if (*(char*)&n == 1) big = false;

    // printf("%lu\n", sizeof(char*));
    FILE *in = _readFile(*++argv);
    if (in) {
      printf("found the file\n");
      printf("reading the file\n");
      char **lines = _readAllLines(in);
      fclose(in);
      // while(*lines) {
      //   printf("%s\n", *lines++);
      // }
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


bool checkEndianness() {
  int n = 1;
  return !(*(char*)&n == 1);
}

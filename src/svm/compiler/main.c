#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <bool.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc == 3) {
    FILE *in = readFile(argv[1]);
    if (in == null) {
      printf("unable to read file: %s\n", argv[1]);
      return 3;
    }
  } else {
    printf("usage: %s infile outfile\n", argv[0]);
  }


  return 0;
}

FILE* readFile(char *fileName) {
  FILE* file = fopen(fileName, "r");

  return file;
}

void saveFile(FILE *file) {

}

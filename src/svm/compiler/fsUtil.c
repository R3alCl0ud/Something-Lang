#include <stdio.h>
#include <stdlib.h>
#include "fsUtil.h"

FILE* _readFile(char *fileName) {
  printf("%s\n", fileName);
  // printf("%i\n", stat(fileName));

  FILE *file = fopen(fileName, "r");

  return file;
}

int _writeFile(FILE *file, int *bytes) {
  return 0;
}

void _closeFile(FILE *file) {

}

char** _readAllLines(FILE *file) {
  int ls = 100, ti = 0;
  char **lines = calloc(ls, sizeof(char*));
  size_t len = 0;
  int readlen;
  while ((readlen = getline(&lines[ti], &len, file)) != -1) {
    if (ti >= ls - 1) {
      printf("attempting resizing lines\n");
      char **tempLines = realloc(lines, (ls *= 2) * sizeof(char*));
      if (tempLines == NULL){
        printf("something went wrong\nreturning early\n");
        break;
      }
      printf("Adr lines:     0x%.16X\nAdr tempLines: 0x%.16X\n", lines, tempLines);
      lines = tempLines;
    }
    ti++;
  }
  return lines;
}

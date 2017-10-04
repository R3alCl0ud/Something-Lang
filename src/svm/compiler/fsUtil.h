#include <stdio.h>
#include <stdlib.h>

FILE* _readFile(char *fileName);
int _writeFile(FILE *file, int *bytes);
char** _readAllLines(FILE *file);
void _saveFile(FILE *file);

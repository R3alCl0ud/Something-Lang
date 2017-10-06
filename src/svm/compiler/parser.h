#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <string.h>

int* parseLine(char *line);

char* methodDefRegex = "\\W*(int|double|bool|string)\\W*(\\S+)\\W*\\(([^\\(\\)]*)\\)";
char* paramDefRegex = "\\W*(int|double|bool|string)\\W+(\\S+)";

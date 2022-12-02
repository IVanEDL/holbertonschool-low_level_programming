#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

char **tokenize(char *line);
char *token(char *line);

#endif

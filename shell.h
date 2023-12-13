#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#define DELIMT " \t\n"
char **tokenizer(char *line);
int _execute(char **command, char **av);
char *read_line(void);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);

#endif


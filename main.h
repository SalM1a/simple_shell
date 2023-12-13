#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;
void _env(char **environ);

char *read_buff(void);
char **getusr_input(char *lin, size_t sz);
int execute(char **argv);
char *get_path(const char *command);

char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);

#endif

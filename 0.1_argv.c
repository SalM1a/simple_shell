#include "main.h"
/**
 * split_arg - function that split string
 * @line: string to be split by strtok
 * Return: argv
 */
char **split_arg(char *line)
{
char *token;
char **argv;
int x = 0;
int sz = 1024;
argv = (char **)malloc(sizeof(char *) * sz);
if (argv == NULL)
{
perror("allcation error\n");
free(argv);
exit(EXIT_FAILURE);
}
token = strtok(line, " ");
while (token != NULL)
{
argv[x] = token;
token = strtok(NULL, " ");
x++;
}
argv[x] = NULL;
return (argv);
}

#include "main.h"
/**
 * read_buffer - function that read line from user
 * Return: line
*/
char *read_buffer(void)
{
char *line = NULL;
size_t sz = 0;
if (getline(&line, &sz, stdin) == -1)
{
free(line);
if (feof(stdin))
{
exit(0);
}
else
{
perror("getline");
exit(1);
}
}
return (line);
}
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
char *line = NULL;
size_t sz = 0;
ssize_t r = 0;
char **argv;
while (true)
{
if (isatty(STDIN_FILENO))
{
write (1, "$ ", 2);
fflush(stdout);
r = getline(&line, &sz, stdin);
if (r == -1)
{
write(1, "\n", 2);
break;
}
}
line[r] = '\0';
argv = split_arg(line);
if (strcmp(argv[0], "exit") == 0)
break;
else if (strcmp(argv[0], "env") == 0)
_env(environ);
else
execute(argv);
free(argv);
}
free(line);
return (0);
}

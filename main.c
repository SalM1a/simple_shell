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
hsh_exit();
}
else
{
perror("getline");
exit(1);
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
if (r == EOF)
break;
write(1, "\n", 2);
hsh_exit();
}
}
line[r] = '\0';
}
line = read_buffer();
argv = split_arg(line);
if (strcmp(argv[0], "env") == 0)
{
_env(environ);
}
free(line);
return (0);
}

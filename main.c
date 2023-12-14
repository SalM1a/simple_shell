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
int main(int argc, char **argv)
{
(void)argc;
char *line = NULL;
size_t sz = 0;
ssize_t r;
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
perror("getline");
exit(1);
}
}
line[r] = '\0';
argv = split_arg(line);
execute(argv);
free(line);
}
return (0);
}

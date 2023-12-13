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
}
line = read_buffer();
free(line);
return (0);
}

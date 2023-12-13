#include "main.h"
/**
 * execute - function to execute arguments
 * @argv: argument
 * Return: status
 */
int execute(char **argv)
{
pid_t child_id;
int status;
child_id = fork();
if (child_id == 0)
{
if (execvp(argv[0], argv) == -1)
{
perror(argv[0]);
exit(1);
}
}
else if (child_id < 0)
{
perror("fork");
exit(1);
}
else
wait(&status);
return (status);
}

#include "main.h"
/**
 * _env - a function that print env
 * @environ: macro
 */
void _env(char **environ)
{
int z = 0;
char **env = environ;
while (env[z] != NULL)
{
write(STDOUT_FILENO, (const void *)env[z], _strlen(env[z]));
write(STDOUT_FILENO, "\n", 1);
z++;
}
}

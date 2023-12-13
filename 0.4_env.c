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
printf("%s", env[z]);
z++;
}
}

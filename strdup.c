#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * to a newly allocted space in memory.
 * @str: pointer to a new string
 * Return: NULL or a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *s1;
if (str == NULL)
return (NULL);
s1 = (char *)malloc(strlen(str) + 1);

if (s1 == NULL)
{
return (NULL);
}
strcpy(s1, str);
return (s1);
}

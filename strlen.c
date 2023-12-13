#include "main.h"
/**
 * _strlen - return the length of string
 * @s: string whose length to be printed
 * Return: length of string
 */
int _strlen(char *s)
{
int count = 0, i;
if (s == NULL)
{
printf("NULL\n");
return (0);
}
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
return (count);
}

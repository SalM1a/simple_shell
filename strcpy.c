#include "main.h"
/**
 * _strcpy - copies the string poited to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: return value
 * @src: source string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int len = 0, i = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
return (dest);
}

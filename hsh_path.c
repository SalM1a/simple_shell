#include "main.h"
/**
 * get_path - get the path
 * @command: command
 * Return: chars
 */
char *get_path(char *command)
{
char *path, *path_val, *path_tok, *command_path;
int len = 0, dir_length = 0;
path = getenv("PATH");
if (path == NULL)
return (NULL);
path_val = strdup(path);
if (path_val == NULL)
return (NULL);
len = _strlen(command);
path_tok = strtok(path_val, ":");
while (path_tok != NULL)
{
dir_length = _strlen(path_tok);
command_path = (char *)malloc(len + dir_length + 2);
if (command_path == NULL)
{
free(path_val);
return (NULL);
}
_strcpy(command_path, path_tok);
_strcat(command_path, "/");
_strcat(command_path, command);
_strcat(command_path, "\0");
sprintf("command_path, %s, %s", path_tok, command);
if (access(command_path, X_OK) == 0)
{
free(path_val);
return (command_path);
}
else
{
free(command_path);
path_tok = strtok(NULL, ":");
}
if (access(command, X_OK) == 0)
return (command);
else
return (NULL);
}
free(path_val);
return (NULL);
}

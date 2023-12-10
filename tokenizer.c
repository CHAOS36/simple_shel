#include "shell.h"

char **tokenizer(char *line)
{
    char *token = NULL, *tmp = NULL;
    char **command = NULL;
    int compt = 0, f = 0;

    if (!line)
        return (NULL);

    tmp = _strdup(line);
    token = strtok(tmp, DELIMT);
    while (token)
    {
        compt++;
        token = strtok(NULL, DELIMT);
    }
    free(tmp), tmp = NULL;

    command = malloc(sizeof(char *) * (compt + 1));
    if (!command)
    {
        free(line);
        return (NULL);
    }

    token = strtok(line, DELIMT);
    while (token)
    {
        command[f] = token;
        token = strtok(NULL, DELIMT);
        f++;
    }

    command[f] = NULL;
    free(line); /* Moved free(line) here */

    return command;
}


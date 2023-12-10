#include "shell.h"
char **tokenizer(char *line)
{
	char **token = NULL, *tmp = NULL;
	char **command = NULL;
	int compt = 0, f = 0;
	
	if (!line)
		return (NULL);
	tmp = _strdup(line);
	token = strtok(line, DELIMT);
	while (token)
	{
		compt++;
		token = strtok(NULL, DELIMT);
	}
	free(tmp), tmp = NULL;

	command = malloc(sizeof(char *) * (cpt + 1));
	if(!command)
	{
		free(line);
		return (NULL);
	}

	token = strtok(line, DELIMT);
	while (token)
	{
		command[i] = token;
		token = strtok(NULL, DELIMT);
		f++;
	}
	free(line), line = NULL;
	command[f] = NULL;
	return(command);
}

#include "shell.h"
#include <stdio.h>

int main(void)
{
	char *str;
	char *token;

	str = _strdup("this         is\t           morocco\n");

	token = strtok(str, " \t\n");

	while (token != NULL) 
	{
		printf("%s\n", token);
		token = strtok(NULL, " \t\n");
	}

	free(str);

	return (0);
}


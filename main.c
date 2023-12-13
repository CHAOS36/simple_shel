#include "shell.h"

/**
 * main - Entry point
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	char *line = NULL, **command = NULL;
	int statut = 0;
	(void)ac;
	(void)av;
	while (1)
	{
		line = read_line();
		if (line == NULL) /* reach EOF ctrl + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (statut);
		}
		command = tokenizer(line);

		statut = _execute(command, av);
	}
}


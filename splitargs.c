#include "main.h"

/**
 * split_args - Splits string input from the user
 * @args: Strings to split
 * Return: Splitted string
 */
char **split_args(char *args)
{
	int i = 0;
	char **command = malloc(sizeof(char *) * 1024);
	char *token, *delim = " \t\r\n";

	if (!command)
	{
		perror("Error, memory not allocated");
		exit(EXIT_FAILURE);
	}

	token = strtok(args, delim);
	while (token != NULL)
	{
		command[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	command[i] = NULL;
	return (command);
}

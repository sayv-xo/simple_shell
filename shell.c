#include "main.h"
/**
 * myfunc - Shell program
 * @ac: Argument count
 * @av: Argument array
 * @envp: Environment parameters
 */
void myfunc(int ac __attribute__((unused)), char *av[], char *envp[])
{
	char *line = NULL;
	size_t n = 0;
	int status;
	pid_t child_pid;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		if (getline(&line, &n, stdin) == -1)
			break;
		if (line == NULL)
			exit(0);
		av = split_args(line);
		if (!av[0])
		{
			free(av);
			continue;
		}
		if (_strcmp(av[0], "env") == 0)
		{
			print_environ(), free(av);
			continue;
		}
		if (_strcmp(av[0], "exit") == 0)
			free(av), free(line), exit(0);
		child_pid = fork();
		if (!child_pid)
		{
			if (_strchr(av[0], '/') == NULL)
				av[0] = search_path(av[0]);
			if (execve(av[0], av, envp))
			{
				perror("execve"), exit(EXIT_FAILURE);
				break;
			}
		}
		wait(&status), free(av);
	}
	free(line);
}

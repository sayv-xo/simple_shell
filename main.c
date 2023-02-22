#include "main.h"

/**
 * main - Entry point of program
 * @ac: Argument count
 * @av: Argument vector
 * @envp: Environment variable
 * Return: 0
 */

int main(int ac __attribute__((unused)), char *av[], char *envp[])
{
	signal(SIGINT, SIG_IGN);
	myfunc(ac, av, envp);
	return (0);
}

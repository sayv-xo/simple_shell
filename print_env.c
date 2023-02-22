#include "main.h"

/**
 * print_environ - Print environment variables
 */

void print_environ(void)
{
	int i = 0;

	while (environ[i])
		printf("%s\n", environ[i++]);
}

#include "main.h"

/**
  * search_path - Make a complete path
  * @path: Command to make path from
  * Return: complete path
  */
char *search_path(char *path)
{
	char *paths = NULL, *token = NULL, ch = '/';
	char *dirs[1024];
	int i;
	char *cwd = getcwd(NULL, 0);
	struct stat sb;

	paths = getenv("PATH");
	token = strtok(paths, ":");
	if (dirs == NULL)
	i = 0;
	while (token != NULL)
	{
		dirs[i] = token;
		token = strtok(NULL, ":");
		i++;
	}
	dirs[i] = NULL;

	i = 0;
	while (dirs[i] != NULL)
	{
		chdir(dirs[i]);
		if (stat(path, &sb) == 0)
		{
			dirs[i] = _strncat(dirs[i], &ch, 1);
			path = _strcat(dirs[i], path);
			break;
		}
		i++;
	}
	chdir(cwd);
	return (path);
}

#include "main.h"

/**
 *_strlen - Function to print the length of a string
 *@s: String to be evaluated
 *
 *Return: Total length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++ != '\0')
		count++;
	return (count);
}

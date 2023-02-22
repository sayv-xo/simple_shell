#include "main.h"

/**
 *_strchr -  Function to locate a char in a string
 *@s: String
 *@c: Char to locate in string
 *
 *Return: Pointer to first occurence if char is found or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
	s++;
	}
	return (0);
}

#include "main.h"

/**
 * _strcat - Function that concatonates 2 string
 * @dest:First string
 * @src:Second String
 *
 * Return: The concatonated string
 */
char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

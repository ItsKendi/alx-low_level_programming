#include "main.h"
#include <stdio.h>

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The string to search within.
 * @c: The character to find.
 *
 * Return: points first occurrence of 'c' in 's', or NULL if 'c' not found.
 */
char *_strchr(char *s, char c)
{
	if (*s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	return (NULL);
}



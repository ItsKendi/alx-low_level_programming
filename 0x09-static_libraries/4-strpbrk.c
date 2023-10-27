#include "main.h"
#include <string.h>
/**
 * _strpbrk - earches for the occurence of a string
 * @s: the string
 * @accept: string occurence
 *
 * Return: pointer to s matching that in accept
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
				return (s);

			temp++;
		}

		s++;
	}

	return (NULL);
}

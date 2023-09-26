#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets length of a prefix substring consisting of characters in `accept`.
 * @s: The string to be searched.
 * @accept: The characters to match in the prefix substring.
 *
 * Return: number of bytes in the initial segment of `s` that consist only of
 * characters from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isAccepted[256] = {0};

	while (*accept)
	{
		isAccepted[(unsigned char)*accept] = 1;
		accept++;
	}

	while (*s && isAccepted[(unsigned char)*s])
	{
		count++;
		s++;
	}

	return (count);
}

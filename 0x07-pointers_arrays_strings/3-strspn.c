#include "main.h"
#include <string.h>
/**
 * _strspn - getting the length of a prefix substring
 * @s: the string
 * @accept: substring
 *
 * Return: length
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

#include "main.h"
#include <stdio.h>
/**
 * _memset - sets the first 'n' bytes of memory pointed to by 's' to 'b'
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

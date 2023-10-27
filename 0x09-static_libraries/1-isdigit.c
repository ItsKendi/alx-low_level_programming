#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)

	{
		return (0);
	}

	else
		if (c < '0' || c > '9')
		{
			return (0);
		}

	return (1);
}

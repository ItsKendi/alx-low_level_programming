#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function name
 * @c : varable
 * description : checks if it is alpha
 *
 * Return: int
 */
int _isalpha(int c);

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

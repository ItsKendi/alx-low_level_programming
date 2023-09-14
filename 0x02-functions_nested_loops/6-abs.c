#include <stdlib.h>
#include "main.h"
/**
 * _abs - function name
 * @c : variable
 * description : checks absolute value of an integer
 *
 * Return: int
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	return (c);
}

#include "main.h"
#include <stdio.h>
/**
 *  _puts_recursion - functions as puts();
 *
 * @s; input
 *
 * Return:Always 0 (),success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		printf("\n");

}

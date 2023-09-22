#include <stdio.h>
/**
 * main - Printing size, in bytes, of a pointer 
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p;

	printf("Size of pointer:%lu\n", sizeof(p));
	return (0);
}

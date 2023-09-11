#include <stdio.h>
/**
 * main - initiates programme
 *
 * Return: return 0(success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		putchar(i);
		if (i == '9')
		{
			i = 'a';
			for (; i <= 'f'; i++)
			{
				putchar(i);

			}
		}
	}
	putchar('\n');
	return (0);
}

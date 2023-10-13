#include <unistd.h>

/**
 * _putchar - Print a character to the standard output (stdout).
 *
 * @c: The character to print.
 *
 * Return: On success, return the number of characters printed (1).
 *         On error, return -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}


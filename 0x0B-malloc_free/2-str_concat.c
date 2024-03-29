#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenating two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i = 0, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	new_string = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		new_string[i] = s1[i];

	for (i = 0; i < len_s2; i++)
		new_string[len_s1 + i] = s2[i];

	new_string[len_s1 + len_s2] = '\0';

	return (new_string);
}


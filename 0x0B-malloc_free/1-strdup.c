#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to  a null-terminated byte string,
 * which is a duplicate of the string pointed to by s.
 * @str: The string to be copied.
 *
 * Return: Return success or null
 */
char *_strdup(char *str)
{
	char *t;
	int i, j;

	t = malloc(i * sizeof(*t) + 1);

	if (str == 0 || t == 0)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j < i; j++)
	{
		t[j] = str[j];
	}
	t[j] = '\0';
	return (t);
}

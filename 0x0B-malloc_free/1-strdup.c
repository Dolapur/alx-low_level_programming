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

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	t = malloc(sizeof(char) * (i + 1));

	if (t == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		t[j] = str[j];
	}
	t[j] = '\0';
	return (t);
}

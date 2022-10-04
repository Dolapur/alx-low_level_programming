#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - returns a pointer to an array of strings (words).
 * @str : pointer
 * Return: it should return NULL if function fails
 */
char **strtow(char *str)
{
	char **h;
	int i, j = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			size++;
	}

	h = malloc(sizeof(char) * size);
	if (h == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			*h[j] = str[i];
			j++;
		}
	}
	return (h);
}

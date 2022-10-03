#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of char
 * @size: The size of the array to be initialized
 * @c: char integer
 * Return: pointer to array or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

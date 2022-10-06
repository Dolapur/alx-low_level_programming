#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	mem = ptr;
	for (i = 0; i < (size * nmemb); i++)
		mem[i] = 0;
	return (ptr);
}

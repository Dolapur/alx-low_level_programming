#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;
	char *p, *q;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);

		if (str == NULL)
			return (NULL);
		else
			return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = ptr;

	str = malloc(sizeof(*p) * new_size);

	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	q = str;

	for (i = 0; i < old_size && i < new_size; i++)
		q[i] = *p++;

	free(ptr);
	return (str);
}

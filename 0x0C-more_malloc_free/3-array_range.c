#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: The first value of the array
 * @max: The last value of the array
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

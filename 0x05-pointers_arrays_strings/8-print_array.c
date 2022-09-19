#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an int that will be updated
 * @n: The number of elements to be printed
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
	}
	if (i < n - 1)
	{
		printf(",");
	}
	i++;
}

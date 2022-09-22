#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n; i >= n / 2; i--)
	{
		int temp = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = temp;
	}
}

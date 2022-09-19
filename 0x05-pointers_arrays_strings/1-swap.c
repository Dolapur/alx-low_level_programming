#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: void that means our answer is correct
*/
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

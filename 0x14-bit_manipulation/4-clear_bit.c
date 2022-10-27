#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: index given
 *
 * Return: 1 (Success) -1 (Failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}

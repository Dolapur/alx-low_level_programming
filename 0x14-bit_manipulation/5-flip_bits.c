#include "main.h"

/**
 * flip_bits - find number of bits to flip from one number to another
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	unsigned long int bits = 0;

	while (val > 0)
	{
		bits += (val & 1);
		val >>= 1;
	}
	return (bits);
}

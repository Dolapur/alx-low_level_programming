#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	unsigned int len;

	if (b = '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len = len - 1; len >= 0; len--)
	{

		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}

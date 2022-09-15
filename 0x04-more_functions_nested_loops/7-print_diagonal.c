#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed
*/
void print_diagonal(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (n > 0)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}

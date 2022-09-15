#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed
*/
void print_diagonal(int n)
{
	int s, t;

	for (s = 0; s < n; s++)
	{
		for (t = 0; t < n; t++)
		{
			if (n > 0)
			{
				_putchar(' ');
				_putchar('\\');
			}
			if  (n == -1)
				continue;
		}
		_putchar('\n');
	}
	_putchar('\n');
}

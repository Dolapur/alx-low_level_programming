#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 *
 * @n: The number of \ characters to be printed
*/
void print_diagonal(int n)
{
	int t, s;

	if (n > 0)
	{
	for (t = 0; t < n; t++)
	{
	for (s = 0; s < n; s++)
	{
		_putchar (' ');
	}
	_putchar('\\');
	_putchar ('\n');
	}
	}
	else
	{
		_putchar ('\n');
	}
}

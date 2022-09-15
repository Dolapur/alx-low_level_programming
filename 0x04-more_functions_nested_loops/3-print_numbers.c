#include "main.h"

/**
 * print_numbers - print numbers
*/
void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		_putchar((k % 10) + '0');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else if ((num / 10) > 0)
	{
		_putchar(num / 10);
	}
	 _putchar((num % 10) + '0');
}

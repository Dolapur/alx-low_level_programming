#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
*/
void print_alphabet_x10(void)
{
	int x;
	int b;

	for (x = 0; x <= 9; x++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

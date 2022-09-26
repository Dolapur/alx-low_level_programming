#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: 2d array of chars
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int  s, t;

	for (s = 0; a[s][7]; s++)
	{
		for (t = 0; t < 8; t++)
			_putchar(a[s][t]);
		_putchar('\n');
	}
}

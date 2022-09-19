#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: A pointer to an int that will be changed
*/
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	b = (a + 1) / 2;

	for (a = b; str[a]; a++)
	{
	_putchar (str[a]);
	}
_putchar ('\n');
}

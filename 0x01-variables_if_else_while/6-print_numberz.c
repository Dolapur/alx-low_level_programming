#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 *
*/

int main(void)

{

	int ch;

	for (ch = 48; ch <= 57; ch++)

	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for new line*/
	return (0);
}

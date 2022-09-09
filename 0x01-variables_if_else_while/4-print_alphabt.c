#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
*/

int main(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{

		if (ch != 'q' && ch != 'e')

		{

			putchar(ch);

		}

	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);

}

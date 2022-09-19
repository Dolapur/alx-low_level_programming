#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be updated
 *
 * Return: void that means answer is correct.
*/
int _strlen(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}

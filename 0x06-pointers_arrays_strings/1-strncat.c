#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 * @n: value
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int f = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (f < n && src[f] != '\0')
	{
		dest[c] = src[f];
		c++;
		f++;
	}
	dest[c] = '\0';
	return (dest);
}

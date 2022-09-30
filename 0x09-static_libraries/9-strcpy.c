#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: A pointer to a char that will be changed
 * @src: A pointer to a char that will be changed
 * *Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int q = 0;

	while (src[q] != '\0')
	{
		dest[q] = src[q];
		q++;
	}
	dest[q] = '\0';
	return (dest);
}

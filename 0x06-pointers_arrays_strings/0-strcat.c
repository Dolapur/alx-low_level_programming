#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	
	while (dest[a] != '\0')
	{
		a++;
	}
	while ((dest[a] = src[b]) != '\0')
	{
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

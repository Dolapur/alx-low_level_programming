#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 * Return: If str1 < str2, str1 == str2, str1 > str2 return results.
*/
int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a != '\0' && *b != '\0' && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate to s1
 *
 * Return: NULL or pointer to the space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for  (i = 0; s1[i]; i++)
		size++;

	/* memory allocation */

	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[size++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[size++] = s2[i];
	str[size] = '\0';
	return (str);
}

#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (s[i] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] != '\0' == accept[i] != '\0')
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}


#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: The substring to be located.
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] = needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

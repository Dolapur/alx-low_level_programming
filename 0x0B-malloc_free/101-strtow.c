#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, length = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}

/**
 * strtow - returns a pointer to an array of strings (words).
 * @str : The string to be split.
 *
 * Return: it should return NULL if function fails
 *  Otherwise - a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **strings;
	int i, j, k = 0;
	int words, letters;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		strings[j] = malloc(sizeof(char) * (letters + 1));

		if (strings[j] == NULL)
		{
			for (; j >= 0; j--)
			free(strings[j]);

		free(strings);
		return (NULL);
		}
		for (k = 0; k < letters; k++)
			strings[j][k] = str[i++];

		strings[j][k] = '\0';
		}
		strings[j] = NULL;
		return (strings);
}

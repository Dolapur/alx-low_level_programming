#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  argstostr - concatenates all arguments of a program
 *  @ac: first parameter integer
 *  @av: second parameter pointer to a pointer
 *  Return: NULL if ac=0 or av=NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, c = 0;
	int size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	str = malloc(sizeof(char) * (size + 1));

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
		str[c++] = av[a][b];
		}
		str[c++] = '\n';
	}
	str[size] = '\0';
	if (str != NULL)
		return (str);
	else
		return (NULL);
}

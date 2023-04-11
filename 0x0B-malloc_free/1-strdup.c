#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that return a ptr to a newly allocted space
 * in memory, whichcontains a copy of the string given as a parameters.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	int n = 0;
	int size = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0' ; size++)
	;

	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
		return (NULL);

	else
	{
		for (; n < size ; n++)
			c[n] = str[n];
	}
	return (c);
}

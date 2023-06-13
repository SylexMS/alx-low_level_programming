#include "main.h"

/**
 * _strlen - find lenght of a str
 * @s: str
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arg
 * Return: str
*/

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmp = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac ; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, cmp++)
			s[cmp] = av[i][j];

		s[cmp] = '\n';
		cmp++;
	}
	s[cmp] = '\0';
	return (s);
}

#include "main.h"

/**
 * _memset - filles memory with a const byte
 * @c: ptr too put the const
 * @ct: const
 * @n: max bytes to use
 * Return: c
*/

char *_memset(char *c, char ct, unsigned int n)
{
	char *p = c;

	while (n--)
		*c++ = ct;

	return (p);
}

/**
 * _calloc - a function that allocates memory for an array
 * using malloc
 * @nmemb: arr len
 * @size: size
 * Return: ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}

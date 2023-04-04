#include "main.h"

/**
 * _memset - function that fille memory with a constant byte
 *
 * @s: pointer to put the constant
 * @b: constant
 * @n: max byte to use
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int lin = 0;

	for (; n > 0 ; lin++)
	{
		s[lin] = b;
		n--;
	}
	return (s);
}

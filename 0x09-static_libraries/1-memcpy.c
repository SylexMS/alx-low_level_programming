#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: lenght
 *
 * Return: @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int lin = 0;
	int i = n;

	for (; lin < i ; lin++)
	{
		dest[lin] = src[lin];
		n--;
	}
	return (dest);
}

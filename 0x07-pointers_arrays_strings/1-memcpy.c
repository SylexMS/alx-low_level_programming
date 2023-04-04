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
	unsigned int lin;

	for (lin = 0 ; lin < n ; lin++)
	{
		dest[lin] = src[itr];
	}
	return (dest);
}

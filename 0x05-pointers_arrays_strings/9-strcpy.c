#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terrminating null byte \0, to the buffer printed to by dest
 *
 * @dest: first char parameter
 * @src: second char parameter
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

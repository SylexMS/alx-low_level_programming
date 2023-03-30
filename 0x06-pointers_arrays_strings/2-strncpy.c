#include "main.h"

/**
 * _strncat - a function that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first b bytes of source
	 * the string placed in dest will not be
	 * null terminated
	*/
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	/**
	 * if the lenght of source is less than n
	 * write additional bullbytes to dest to ensure that
	 * a total of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}

	return (dest);
}

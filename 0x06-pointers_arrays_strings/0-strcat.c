#include "main.h"

/**
 * _strcat - function that concatentes ttwo strings
 *
 * @src: pointer to source input
 * @dest: pointer to destination input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;

	/*iterate throught each src array value without the null byte*/
	for (c2 = 0 ; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwrithing the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of array
 * @c: char
 * Return: ptr to the array init or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *b = malloc(size);

	if (size == 0 || b == 0)
		return (0);

	while (size--)
		b[size] = c;

	return (b);
}

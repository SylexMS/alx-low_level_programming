#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * and exit if failed
 * @b: integer
 * Return: ptr to the array init or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
		exit(98);

	return (c);
}

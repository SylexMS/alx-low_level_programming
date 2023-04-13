#include "main.h"

/**
 * array_range - a function that creates an array of int
 * @ min: starting int
 * @max: max of int
 * Return: arr of int
*/

int *array_range(int min, int max)
{
	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (!p)
		return (NULL);
	for (i = 0; i < len ; i++)
		p[i] = min++;

	return (p);
}

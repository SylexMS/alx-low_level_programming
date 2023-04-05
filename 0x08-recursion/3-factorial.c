#include "main.h"

/**
 * factorial - function that finds factorial
 *
 * @n: integer
 *
 * Return: n
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * _abc - function that computea the absolute value of an integer
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
*/

int _abc(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

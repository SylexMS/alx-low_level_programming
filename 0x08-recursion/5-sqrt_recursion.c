#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: integer
 * @sr: square root
 * Return: integer
*/
int square(int n, int sr);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: integer to find sqaure root
 * @sr: square root
 * Return: integer
*/

int square(int n, int sr)
{
	if (sr * sr == n)
		return (sr);
	else if (sr * sr < n)
		return (sqaure(n, sr + 1));
	else
		return (-1);
}

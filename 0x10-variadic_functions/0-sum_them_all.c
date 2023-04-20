#include "variadic_functions.h"

/**
 * sum_them_all - sums var arg
 * @n: numbers of arg
 * @...: int of sum
 *
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int f = 0;
	int i = n;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}

#include "main.h"

/**
 * print_binary - prints a number as binary str
 * @n: the number to print
*/

void print_binary(unsigned long int n)
{
	int bt = sizeof(n) * 8, printed = 0;

	while (bt)
	{
		if (n & 1L << --bt)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar ('0');
	}
	if (!printed)
		_putchar('0');
}

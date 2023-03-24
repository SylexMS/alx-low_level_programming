#include "main.h"

/**
 * print_most_numbers - print number numbers from 0 to 9
 * apart 2 and 4 with _putchar
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
		if (!(num == 2  || num == 4))
		_putchar(num + 48);
	}
	_putchar('\n');
}

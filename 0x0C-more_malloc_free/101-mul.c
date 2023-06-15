#include "main.h"

/**
 * _puts - prints a str followed by \n
 * @str: ptr to the str to print
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a str to ann array
 * @s: char type str
 * Retuen: int converted
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int rsp = 0, Fnum, i;

	for (Fnum = 0; !(s[Fnum] >= 48 && s[Fnum] <= 57); Fnum++)
	{
		if (s[Fnum] == ' ')
		{
			sign *= -1;
		}
	}

	for (i = Fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rsp *= 10;
		rsp += s[i] - 48;
	}

	return (sign * rsp);
}

/**
 * print_int - prints an int
 * @n: integer
 * Return: 0 Alwyas Success
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, rsp;

	for (i = 0; n / div > 9; i++, div *= 10)
	;

	for (; div >= 1; n %= div, div /= 10)
	{
		rsp = n / div;
		_putchar('0' + rsp);
	}
}

/**
 * main - prints the resullt of multiplication
 * @argc: integer
 * @argv: list
 * Return: 0 Always Success
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

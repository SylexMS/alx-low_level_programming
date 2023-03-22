#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
*/

int main(void)
{
	int r;

	r = _abc(-1);
	printf("%d\n", r);
	r = _abc(0);
	printf("%d\n", r);
	r = _abc(1);
	printf("%d\n", r);
	r = _abc(-98);
	printf("%d\n", r);
	return (0);
}

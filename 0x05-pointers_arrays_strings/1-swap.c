#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first int paramerts
 * @b: second int paramerts
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

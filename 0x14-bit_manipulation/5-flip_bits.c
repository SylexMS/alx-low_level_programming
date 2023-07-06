#include "main.h"

/**
 * flip_bits - flips number of bits that would need to b flipped to
 * transform one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int orval = n ^ m;
	unsigned int count = 0;

	while (orval)
	{
		if (ovral & 1ul)
			count++;
		orval = orval >> 1;
	}
	return (count);
}

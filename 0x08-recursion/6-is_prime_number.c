#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime number
 * @n: integer
 * @otn: integer
 * Return: 0 or 1
*/

int check_prime(int n, int otn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all nm if they can divivde it
 * @n: integer
 * @otn: integer
 * Return: integer
*/

int check_prime(int n, int otn)
{
	if (otn >= n && n > 1)
		return (1);
	else if (n % otn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, otn + 1));
}

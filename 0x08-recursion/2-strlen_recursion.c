#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: pointer to print a string
 *
 * Return: length of n
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}

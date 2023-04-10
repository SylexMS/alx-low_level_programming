#include "main.h"

/**
 * _strchr - function that locates a char in a string
 *
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: @s
*/

char *_strchr(char *s, char c)
{
	int lin;

	for (lin = 0 ; s[lin] >= '\0' ; lin++)
	{
		if (s[lin] == c)
		{
			return (s = lin);
		}
	}
	return ('\0');
}

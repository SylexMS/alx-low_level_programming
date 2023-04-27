#include "lists.h"

/**
 * _strlen - returns the length of a str
 * @c: the str whose length to check
 *
 * Return: int length of str
*/
int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);
	while (*c++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked lists
 * @h: ptr to first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

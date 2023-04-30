#include "lists.h"

/**
 * free_listint - a function that frees a list of int
 * @head: ptr to first node
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

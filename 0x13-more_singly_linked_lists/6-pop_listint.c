#include "lists.h"

/**
 * pop_listint - a function that pops head node of list
 * @head: address of ptr to first node
 * Return: value of popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = node;
	return (i);
}

#include "lists.h"

/**
 * add_nodeint_end - a funt that adds a node to the bottom
 * @head: ptr to first node
 * @n: value for new node
 *
 * Return: ptr to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (!*head)
		*head = n_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = n_node;
	}
	return (n_node);
}

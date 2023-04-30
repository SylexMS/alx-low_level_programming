#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: ptr to first node
 * @n: value for new node
 *
 * Return: ptr to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!head || !n_node)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (*head)
		n_node->next = *head;
	*head = n_node;
	return (n_node);
}

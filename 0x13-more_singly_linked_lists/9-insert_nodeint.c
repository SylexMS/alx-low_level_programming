#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given index
 * *@head: address of ptr to first node
 * @idx: index to insert new node
 * @n: value of new node
 *
 * Return: address of new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint *node, *n_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	node = *head;
	while (node)
	{
		if (i == idz - 1)
		{
			n_node->next = node->next;
			node->next = n_node;
			return (n_node);
		}
		i++;
		node = node->next;
	}
	free(n_node);
	return (NULL);
}

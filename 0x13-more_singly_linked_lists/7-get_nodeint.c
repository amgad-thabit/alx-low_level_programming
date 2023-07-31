#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: first node in the linked list
 * @index: index of the node to get
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	return (node ? node : NULL);
}

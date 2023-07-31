#include "lists.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t fr = 0;

	while (h)
	{
		fr++;
		h = h->next;
	}

	return (fr);
}

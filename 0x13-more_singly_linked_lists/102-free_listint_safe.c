#include "lists.h"

/**
 * free_listint_safe - get free a linked list
 *
 * @h: pointer to the first node
 *
 * Return: adress of node
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int wel;
	listint_t *tp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		wel = *h - (*h)->next;
		if (wel > 0)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}


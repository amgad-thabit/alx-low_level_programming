#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: first node
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *stop = head;
	listint_t *speed = head;

	if (!head)
		return (NULL);

	while (stop && speed && speed->next)
	{
		speed = speed->next->next;
		stop = stop->next;
		if (speed == stop)
		{
			stop = head;
			while (stop != speed)
			{
				stop = stop->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}

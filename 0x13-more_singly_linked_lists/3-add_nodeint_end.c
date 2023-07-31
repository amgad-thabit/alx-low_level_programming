#include "lists.h"

/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to the first node
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_no;
	listint_t *temp = *head;

	new_no = malloc(sizeof(listint_t));
	if (!new_no)
		return (NULL);

	new_no->n = n;
	new_no->next = NULL;

	if (*head == NULL)
	{
		*head = new_no;
		return (new_no);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_no;

	return (new_no);
}


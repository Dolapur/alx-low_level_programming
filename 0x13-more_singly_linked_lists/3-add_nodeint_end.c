#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * of the linked list
 * @head: head of a list.
 * @n: n element
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastnode;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		lastnode = *head;

		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (*head);
}

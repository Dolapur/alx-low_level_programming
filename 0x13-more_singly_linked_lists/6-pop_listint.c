#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: If the linked list is empty - 0.
 * Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *tmp;
	int ndata;

	if (*head == NULL)
		return (0);
	ptr = *head;
	ndata = ptr->n;
	tmp = ptr->next;

	free(ptr);
	ndata = tmp;

	return (ndata);
}

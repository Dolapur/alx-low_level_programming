#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

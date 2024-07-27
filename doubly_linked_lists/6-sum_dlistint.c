#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a doubly linked list.
 * @head: List.
 *
 * Return: Sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

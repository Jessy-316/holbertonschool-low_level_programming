#include "lists.h"
/**
 * free_dlistint - Frees a list.
 * @head: Beginning of list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cop;

	while (head != NULL)
	{
		cop = head;
		head = head->next;
		free(cop);
	}
	free(head);
}

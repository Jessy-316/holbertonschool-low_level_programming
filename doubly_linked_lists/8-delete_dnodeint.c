#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of list.
 * @head: Beginning of list.
 * @index: Position of node to be deleted.
 *
 * Return: 1 on (Success), -1 if (Failed).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1 = *head, *temp2 = NULL;

	if (*head == NULL)
		return (-1);
	if (index < 1)
	{
		if (temp1->next != NULL)
		{
			*head = temp1->next;
			(*head)->prev = NULL;
			free(temp1);
			return (1);
		}
		free(temp1);
		*head = NULL;
		return (1);
	}
	while (index >= 1)
	{
		temp1 = temp1->next;
		index--;
		if (temp1 == NULL)
			return (-1);
	}
	if (temp1->next == NULL)
	{
		temp2 = temp1->prev;
		temp2->next = NULL;
		free(temp1);
		return (1);
	}
	else
	{
		temp2 = temp1->prev;
		temp2->next = temp1->next;
		temp1->next->prev = temp2;
		free(temp1);
		return (1);
	}
	return (-1);
}

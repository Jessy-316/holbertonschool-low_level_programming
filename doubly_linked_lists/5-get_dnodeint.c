#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a doubly list.
 * @head: Beginning of list.
 * @index: Node to return.
 *
 * Return: Nth Node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cop;
	unsigned int lmt = 0, num = 0;

	cop = malloc(sizeof(dlistint_t));
	if (cop == NULL)
	{
		return (NULL);
	}
	if (head != NULL)
	{
		cop = head;
		while (cop->next != NULL)
		{
			cop = cop->next;
			lmt++;
		}
	}
	if (index > lmt)
	{
		return (NULL);
	}
	else if (num < index)
	{
		while (num < index)
		{
			head = head->next;
			num++;
		}
	}
	return (head);
}

#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end
 * of a dlistint_t list.
 * @head: Beginning of list.
 * @n: Integer data.
 *
 * Return: New node at the end of list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *copy;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		copy = *head;
		while (copy->next != NULL)
		{
			copy = copy->next;
		}
		new_node->prev = copy;
		copy->next = new_node;
	}
	return (new_node);
}

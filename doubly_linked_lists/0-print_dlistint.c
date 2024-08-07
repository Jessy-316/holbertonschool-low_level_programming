#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: List.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}

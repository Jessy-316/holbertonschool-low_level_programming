#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: List.
 *
 * Return: Number of elements on list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}

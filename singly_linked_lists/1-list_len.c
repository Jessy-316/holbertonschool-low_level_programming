#include "lists.h"
/**
 * list_len - Number of elements on a list.
 * @h: List.
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}

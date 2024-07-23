#include "lists.h"
/**
 * free_list - Frees a list.
 * @head: Beginning of a list.
 */
void free_list(list_t *head)
{
	list_t *joyboy;

	while (head != NULL)
	{
		joyboy = head;
		head = head->next;
		free(joyboy->str);
		free(joyboy);
	}
	free(head);
}

#include "lists.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: The string being measured.
 *
 * Return: Integer Success).
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node_end - Adds a new node at the end of a list.
 * @head: Beginning of the list.
 * @str: New string.
 *
 * Return: List.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *dup;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		dup = *head;
		while (dup->next != NULL)
			dup = dup->next;
		dup->next = new_node;
	}
	return (new_node);
}

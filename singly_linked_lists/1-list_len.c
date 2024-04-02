#include "lists.h"

/**
* list_len - that returns the number of elements in a linked list_t list.
* @h: Pointer to the head of the linked list.
* Return: The number of elements in the linked list.
*/

size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	int i;

	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;
	return (i);
}

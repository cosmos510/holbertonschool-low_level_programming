#include "lists.h"

/**
* dlistint_len - that returns the number of elements in a linked list_t list.
* @h: Pointer to the head of the linked list.
* Return: The number of elements in the linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i;

	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;
	return (i);
}

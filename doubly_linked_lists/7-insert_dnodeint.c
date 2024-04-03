#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: Pointer to the head of the linked list.
* @idx: index where the new node should be added
* @n: data to insert
* Return: the address of the new node
*         NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}

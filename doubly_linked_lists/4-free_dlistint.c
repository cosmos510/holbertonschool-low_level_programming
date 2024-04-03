#include "lists.h"

/**
* free_dlistint - free the list
* @head: Pointer to the head of the linked list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

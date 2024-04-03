#include "lists.h"

/**
* get_dnodeint_at_index - get node at the index of the list
* @head: Pointer to the head of the linked list.
* @index: index to find thenode
* Return: the nth node if no problem
*         Null if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count = 0;

	current_node = head;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		count++;
		current_node = current_node->next;
	}
	return (NULL);
}

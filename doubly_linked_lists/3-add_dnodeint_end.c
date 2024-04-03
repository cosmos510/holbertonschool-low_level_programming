#include "lists.h"

/**
* add_dnodeint_end - add new node at the end of the list
* @head: Pointer to the head of the linked list.
* @n: int to add at the beggining of the linked list
* Return: The adress of the new element if no problem
*         Null if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}

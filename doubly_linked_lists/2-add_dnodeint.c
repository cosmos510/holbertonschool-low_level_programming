#include "lists.h"

/**
* add_dnodeint - add new node at the beginning of the list
* @head: Pointer to the head of the linked list.
* @n: int to add at the beggining of the linked list
* Return: The adress of the new element if no problem
*         Null if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
* sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
* @head: Pointer to the head of the linked list.
* Return: the sum of all data
*         0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;
	int sum = 0;

	current_node = head;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}

#include "lists.h"

/**
* print_dlistint - fonction that that prints all the elements of a list.
* @h: Pointer to the head of the linked list.
* Return: The number of elements in the linked list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i;

	for (i = 0; tmp != NULL; i++)
	{
		printf("%d\n", tmp->n);

		tmp = tmp->next;
	}
	return (i);
}

#include "lists.h"

/**
* print_list - fonction that that prints all the elements of a list_t list.
* @h: Pointer to the head of the linked list.
* Return: The number of elements in the linked list.
*/

size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
	int i;

	for (i = 0; tmp != NULL; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
	}
	return (i);
}

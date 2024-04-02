#include "lists.h"

/**
* add_node - add new node at the beginning of the list
* @head: Pointer to the head of the linked list.
* @str: char to add at the beggining of the linked list
* Return: The adress of the new element if no problem
*         Null if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
		free(new_node);
	}
	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

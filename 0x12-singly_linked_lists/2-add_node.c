#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Pointer to pointer to head
* @str: String (pointer to str)
*
* Return: list_t
*/

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	char *new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

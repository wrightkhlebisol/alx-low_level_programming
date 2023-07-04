#include "lists.h"

/**
 * str_length - Get length of string
 * @str: String to count
 * Return: Length of string
 */
int str_length(const char *str)
{
	int str_length = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		str_length++;
		str++;
	}
	return (str_length);
}

/**
 * add_node - Add node at the beginning
 * @head: Head of the node
 * @str: str to add
 * Return: Address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL || head == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length(str);

	*head = new_node;

	new_node->next = *head;

	return (new_node);
}

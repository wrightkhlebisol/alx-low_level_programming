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
 * add_node_end
 * @head: Node head
 * @str: Value of new node
 * Return: Address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length(str);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		while (*head != NULL)
		{
			list_t *temp = *head;
			*head = (*head)->next;
			if (*head == NULL)
			{
				new_node->next = NULL;
				(*head)->next = new_node;
				break;
			}
		}
	}
	return (new_node);
}

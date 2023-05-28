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
	char *duplStr = strdup(*str);
	list_t newList = malloc(sizeof(list_t));
	newList = {*duplStr, sizeof(duplStr), **head->next};
	**head = &newList;


	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

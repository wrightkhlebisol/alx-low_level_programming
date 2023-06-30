#include "lists.h"
/**
 * print_list - Print all elements of Linked list
 * @h: Head
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		exit(1);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		node_num++;
	}

	return (node_num);
}

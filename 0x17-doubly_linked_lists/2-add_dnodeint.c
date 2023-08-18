#include "lists.h"

/**
 * add_dnodeint - Add node at head
 * @head: head of node
 * @n: Node value
 *
 * Return: Pointer to new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp->prev = new_node;
	*head = new_node;

	return (new_node);
}

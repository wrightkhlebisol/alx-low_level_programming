#include "lists.h"

/**
 * add_dnodeint_end - Add node at list end
 * @head: head of node
 * @n: Node value
 *
 * Return: Pointer to new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}

#include "lists.h"
/**
 * add_nodeint_end - Add node at end
 * @head: Pointer to pointer to head
 * @n: value of new element
 *
 * Return: Pointer to new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *temp = NULL;

	if (head == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
	/*	while (head)
		{
			head.next = new_node;
			return (new_node);
			head = head.next;
		}
	*/
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

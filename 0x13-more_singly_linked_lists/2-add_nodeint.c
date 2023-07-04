#include "lists.h"
/**
 * add_nodeint - Add new node at beginning
 * @head: Pointer to pointer to head
 * @n: Value of new node
 *
 * Return: Address of new element or NULLL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));

	if (head == NULL || new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}

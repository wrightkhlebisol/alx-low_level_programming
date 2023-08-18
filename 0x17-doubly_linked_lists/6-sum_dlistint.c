#include "lists.h"

/**
 * sum_dlistint - Sum off all data in list
 * @head: list head
 *
 * Return: Sum of all list element
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum_list = 0;

	if (temp == NULL)
		return (sum_list);

	while (temp != NULL)
	{
		sum_list += temp->n;
		temp = temp->next;
	}

	return (sum_list);
}

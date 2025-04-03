#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * in a doubly linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted (starting from 0)
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp && i < index; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (temp->next)
		temp->next->prev = temp->prev;

	if (temp->prev)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}

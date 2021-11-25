#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a linked list at a given index
 * @head: A pointer to the head of the list
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	listint_t *newn, *cur;
	unsigned int i;

	i = 0;
	newn = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = newn->next;
		free(newn);
		return (1);
	}
	while (i != index)
	{
		cur = newn;
		newn = newn->next;
		if (newn == NULL)
			return (-1);
		i++;
	}

	cur->next = newn->next;
	free(newn);
	return (1);
}

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
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0, tmp = *head; i != index && tmp; i++, tmp = tmp->next)
		;
	if (tmp)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}

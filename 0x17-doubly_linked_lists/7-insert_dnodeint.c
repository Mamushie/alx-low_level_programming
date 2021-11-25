#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at the given index
 * @head: beggining of list
 * @index: number of link to find
 * Return: the searched for node
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	unsigned int j;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	j = 0;
	node = *h;

	if (idx == 0)
	{
		new->next = node;
		node->prev = new;
		*h = new;
		return (new);
	}
	while (j + 1 < idx)
	{
		node = node->next;
		j++;
	}
	node->next->prev = new;
	new->next = node->next;
	node->next = new;
	new->prev = node;

	return (new);

}

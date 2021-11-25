#include "lists.h"

/**
 * add_dnodeint - will add a node to the beginning of the list
 * @head: head of the list
 * @n: value to insert into the list
 *
 * Return: the address of the created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *hold = NULL, *posi = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (head != NULL)
		posi = *head;
	while (posi != NULL)
		hold = posi, posi = posi->prev;
	if (hold != NULL)
	{
		hold->prev = newnode;
		newnode->next = hold;
	}

	*head = newnode;

	return (newnode);
}

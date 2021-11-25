#include "lists.h"

/**
 * add_dnodeint_end - will insert a node at the end of a list
 * @head: the head of the dlistint_t list
 * @n: the value to insert into the linked list
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *hold = NULL, *posi = NULL, *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (head != NULL)
		posi = *head;
	while (posi != NULL)
		hold = posi, posi = posi->next;

	if (hold != NULL)
	{
		hold->next = newnode;
		newnode->prev = hold;
	}
	else
		*head = newnode;

	return (newnode);
}

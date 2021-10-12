#include "lists.h"

/**
 * listint_len - return number of elements in a linked listint_t list
 * @h: pointer to the address of the head of the listint_t list
 * 
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}


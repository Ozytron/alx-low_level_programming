#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: The singly linked list.
 * Return: he number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: The singly linked list.
 * Return: he number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_number++;
	}
	return (node_number);
}

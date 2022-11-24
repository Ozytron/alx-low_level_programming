#include "lists.h"

/**
 * list_len - calculates number of elements list
 * @h: pointer to structure
 * Return: length of list.
 */

size_t list_len(const list_t *h)
{

unsigned int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

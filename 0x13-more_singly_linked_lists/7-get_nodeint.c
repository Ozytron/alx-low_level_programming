#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The singly linked list.
 * @index: the nth node.
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t count = 0;

	temp = head;

	while (count < index)
	{
		if (temp != NULL)
			temp = temp->next;

		count++;
	}
	return (temp);
}

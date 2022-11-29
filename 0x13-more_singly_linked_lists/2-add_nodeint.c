#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the start of the singly linked list.
 * @n: integer value stored in the node.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;

	*head = new;
	return (*head);
}

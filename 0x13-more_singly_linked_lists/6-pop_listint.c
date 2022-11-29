#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *                and returns the head node’s data (n).
 * @head: pointer to the start of the singly linked list.
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *current_head, *temp;
	int curr_head_data;

	if (*head == NULL)
		return (0);

	current_head = *head;
	curr_head_data = current_head->n;

	temp = current_head->next;

	free(current_head);

	*head = temp;
	return (curr_head_data);
}

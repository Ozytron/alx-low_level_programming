#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 *                           index of a listint_t linked list.
 * @head: The singly linked list.
 * @index: the nth node.
 * Return: Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *temp;
	unsigned int count;

	temp = *head;

	if (index != 0)
	{
		count = 0;
		while (count < index - 1 && temp != NULL)
		{
			temp = temp->next;
			count++;
		}
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);

	del_node = temp->next;

	if (index != 0)
	{
		temp->next = del_node->next;
		free(del_node);
	}
	else
	{
		free(temp);
		*head = del_node;
	}
	return (1);
}

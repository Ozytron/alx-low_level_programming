#include "lists.h"

/**
 * free_list_print2 - frees a linked list
 * @h: h of a list.
 *
 * Return: no return.
 */
void free_list_print2(list_print_t **h)
{
	list_print_t *temp;
	list_print_t *curr;

	if (h != NULL)
	{
		curr = *h;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*h = NULL;
	}
}

/**
 * free_listint_safe - prints a linked list.
 * @h: h of a list.
 *
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	list_print_t *head_ptr, *new, *temp;
	listint_t *curr;

	head_ptr = NULL;

	while (*h != NULL)
	{
		new = malloc(sizeof(list_print_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		temp = head_ptr;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (*h == temp->p)
			{
				*h = NULL;
				free_list_print2(&head_ptr);
				return (count);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		count++;
	}
	*h = NULL;
	free_list_print2(&head_ptr);
	return (count);
}

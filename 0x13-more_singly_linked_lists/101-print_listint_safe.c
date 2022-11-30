#include "lists.h"

/**
 * free_list_print - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list_print(list_print_t **head)
{
	list_print_t *temp;
	list_print_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	list_print_t *head_ptr, *new, *temp;

	head_ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_print_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = head_ptr;
		head_ptr = new;

		temp = head_ptr;

		while (temp->next != NULL)
		{
			temp = temp->next;
			if (head == temp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_print(&head_ptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_list_print(&head_ptr);
	return (count);
}

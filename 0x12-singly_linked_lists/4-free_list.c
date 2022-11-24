#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: The input list to the function.
 */
void free_list(list_t *head)
{
list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}

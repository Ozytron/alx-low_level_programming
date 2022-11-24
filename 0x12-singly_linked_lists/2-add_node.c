#include "lists.h"

/**
 * add_node - adds new node at the begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the adrres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *Node_new;
unsigned int length = 0;

	Node_new = malloc(sizeof(list_t));
	if (Node_new == NULL)
	{
		free(Node_new);
		return (NULL);
	}
	Node_new->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	Node_new->len = length;
	if (*head != NULL)
		Node_new->next = *head;
	if (*head == NULL)
		Node_new->next = NULL;
	*head = Node_new;
	return (*head);
}

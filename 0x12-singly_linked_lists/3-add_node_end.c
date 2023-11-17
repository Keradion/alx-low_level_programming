#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 * @str: data inside the node
 * @head: address of the head node
 *
 * Return: address of the new node , null if failure occure
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *root = *head;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	/* NULL since its the last node in the list */

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (root->next != NULL)
	{
		root = root->next;
	}

	root->next = temp;
	return (temp);
}

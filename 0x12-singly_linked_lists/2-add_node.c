#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to head node
 * @str: string to be written
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	/* creating memory block which is equivalent to creating a node */

	temp = malloc(sizeof(list_t));

	len = strlen(str);

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;

	(*head) = temp;
	return (*head);
}

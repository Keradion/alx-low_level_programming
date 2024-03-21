#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end of a linked list
 * @head: pointer to the head node
 * @n: value of the node to be insert
 *
 * Return: address of the new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (temp == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the head node
 * @n: value to be insert in the new node
 *
 * Return: address of the new node of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;

	return (*head);
}

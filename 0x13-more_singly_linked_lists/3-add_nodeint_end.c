#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the head node
 * @n: value to be set
 *
 * Return: addresses of the new node created
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *temp = *head;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	  new->next = NULL;
	  new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = new;

	return (new);
}

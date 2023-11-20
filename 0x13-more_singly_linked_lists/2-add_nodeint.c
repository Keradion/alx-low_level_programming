#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to head node initially with NULL value
 * @n: value to be set into the new node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* new hold address of the new node */

	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	/* set the value inside new to head , head points to head node */
	if (head == NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (*head);


}

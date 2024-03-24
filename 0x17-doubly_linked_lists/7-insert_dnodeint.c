#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: pointer to the head node
 * @idx: index where the node inserts
 * @n: value of the node to be insert
 *
 * Return: address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = NULL;
	size_t count = 0;
	unsigned int i = 0;

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (idx > count)
		return (NULL);
	if (idx == count)
		return (add_dnodeint_end(&temp, n));
	if (idx == 0)
		return (add_dnodeint(&temp, n));


	while (i < idx)
	{

		temp = temp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));

	new->next = temp->next;
	new->prev = temp;
	new->n = n;

	return (new);

}

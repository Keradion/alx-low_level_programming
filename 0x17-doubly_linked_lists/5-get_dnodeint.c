#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the head node
 * @index: index of the node to be retrieved
 *
 * Return: the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	while (i < (index))
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}

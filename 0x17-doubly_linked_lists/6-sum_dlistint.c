#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * @head: pointer to the head node
 *
 * Return: sum 
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

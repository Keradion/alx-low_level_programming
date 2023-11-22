#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t
 * @head: pointer to the head node
 *
 * Return: sum int
 */

int sum_listint(listint_t *head)
{
	/* to hold sum of data s */
	int sum = 0;
	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	/* loop terminates before adding data of last node, we do that outside */
	sum = sum + head->n;
	return (sum);
}

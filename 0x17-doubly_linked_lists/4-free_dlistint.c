#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head node
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

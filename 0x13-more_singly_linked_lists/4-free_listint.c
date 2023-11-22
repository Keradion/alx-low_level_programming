#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		free(temp);
	}
	free(head);
}

#include "lists.h"

/**
 * pop_listint - deletes the head noad of listint_t
 * @head: double pointer to the head node
 *
 * Return: 0 if no node exists
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (head == NULL)
		return (0);

	data =(*head)->n;
	*head = temp->next;
	temp->next = NULL;
	free(temp);

	return (data);
}

#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: double pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
	free(*head);
	*head = NULL;
}

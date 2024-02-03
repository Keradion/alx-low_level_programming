#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of listint_t
 * @head: pointer to the  head node
 *
 * Return: 1 if succeeded -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *temp1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(temp);
		return (1);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (count < index)
		return (-1);

	while (i < (index-1) )
	{
		temp = temp->next;
		i++;
	}

	temp1 = temp->next;

	temp->next = temp1->next;
	temp1->next = NULL;
	free(temp1);
	return (1);
}

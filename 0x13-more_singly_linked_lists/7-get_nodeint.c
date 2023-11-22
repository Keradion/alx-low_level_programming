#include "lists.h"

/**
 * get_nodeint_at_index - returns thee nth node of a listint_t
 * @head: pointer to the head node
 * @index: position of node to be retrieve
 *
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (head->next != NULL)
	{
		head = head->next;
		count++;
	}

	if (index > count)

		return (NULL);

	/* iteration till the taregt node address stored in temp */

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	/* if the index is not found no node exist at that inde */


	return (temp);
}

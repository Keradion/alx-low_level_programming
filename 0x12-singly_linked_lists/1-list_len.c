#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}

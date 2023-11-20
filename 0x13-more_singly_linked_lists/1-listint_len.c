#include "lists.h"

/**
 * listint_len - return the number of elements in a linked list
 * @h: pointer to the head node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

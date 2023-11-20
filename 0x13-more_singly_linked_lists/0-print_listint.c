#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list (listint_t(
 * @h: pointer to head node or hold address of the head node
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	/* counter to count number of elements */
	int count = 0;

	/* loop continues till the last node reached */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);

}

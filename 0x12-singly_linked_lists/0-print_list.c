#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	/* count help us to store number of nodes in the list */

	const list_t *root = h;
	size_t count = 0;

	while (root != NULL)
	{

	if (root->str == NULL)
	{
		printf("[%d] (%s)\n", 0, "nill");
	}
	else
	{
		printf("[%d] %s\n", root->len, root->str);

		/* next member of the head node hold address of the next node */
	}
		root = root->next;

		/* to move to the next node we set its address into node pointer h */

		/* h now holds address of the next node */
		count++;

	}

	return (count);

}

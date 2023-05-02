#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nodenum = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		nodenum += 1;
		cursor = cursor->next;
	}

	return (nodenum);
}

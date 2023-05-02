#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data of a listint_t
 * @head: pointer to the first node in the listint_t list
 * Return: sum of element data in the listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

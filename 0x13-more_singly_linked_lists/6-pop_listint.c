#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: pointer to the first node of the listint_t list
 * Return: the head node data if not empty otherwise return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}

#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_ list
 * @head: pointer to the first node in the listint_t list
 * @index: index of the node to return
 * Return: nth node of a lsitint_t list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

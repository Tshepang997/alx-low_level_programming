#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head to the first node
 * @index: index starting at 0
 * Return: to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

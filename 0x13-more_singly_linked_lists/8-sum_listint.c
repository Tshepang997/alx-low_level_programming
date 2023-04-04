#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) linked list
 * @head: head to the first node
 * Return: 0 always
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

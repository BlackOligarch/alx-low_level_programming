#include "lists.h"

/**
 * sum_listint - It returns the sum of all the integer values of linked list
 * @head: the head node
 *
 * Return: the sum of all the integer values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0); /* If the list is empty */

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

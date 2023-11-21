#include "lists.h"

/**
 * get_nodeint_at_index - It returns the nth node of a linked list of integers
 * @head: the head node
 * @index: the index of the node (starts at 0)
 *
 * Return: the address of the nth node if found, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL); /* If the list is empty, there's nothing to search */

	while (head != NULL)
	{
		if (i == index)
		{
			return (head); /* If node found, return it's address */
		}
		/* If node not found, keep searching */
		head = head->next;
		i++;
	}

	return (NULL); /* If the node does not exist */
}

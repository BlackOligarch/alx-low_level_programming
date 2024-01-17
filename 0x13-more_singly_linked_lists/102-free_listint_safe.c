#include "lists.h"

/**
 * free_listint_safe - It safely deallocates memory for a linked list & checks
 * for a loop
 * @head: a pointer to the start of the list
 *
 * Return: the number of nodes in the free'd list
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp;
	ssize_t offset;
	size_t node_count = 0;

	if (head == NULL || *head == NULL)
	{
		return (0); /* If the list is empty, there's nothing to free */
	}

	while (*head != NULL)
	{
		offset = *head - (*head)->next;

		/* It free the nodes before the loop is encountered, if any */
		if (offset > 0)
		{
			tmp = (*head);
			(*head) = (*head)->next;
			free(tmp);
			tmp = NULL;
			node_count++;
		}
		else
		{
			/* If a loop is found, clean up and leave */
			free(*head);
			*head = NULL;
			node_count++;
			break;
		}
	}

	*head = NULL; /* It avoids a danlging pointer */
	return (node_count);
}

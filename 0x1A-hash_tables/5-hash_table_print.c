#include "hash_tables.h"

/**
 * hash_table_print - it prints a hash table
 * @ht: the table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, nodes_printed;

	if (ht == NULL)
		return; /* hash table is not initialized */

	nodes_printed = 0;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		/* add spaces if necessary */
		if (nodes_printed == 1 && ht->array[i] != NULL)
		{
			printf(", ");
			nodes_printed = 0;
		}
		while (node != NULL)
		{
			/* for chained conditions: format with the commas as well */
			printf("'%s': '%s'%s", node->key, node->value,
					(node->next) ? ", " : "");

			/* keep the nodes printed to 1 for later */
			nodes_printed++;
			if (nodes_printed > 1)
				nodes_printed = 1;

			node = node->next;
		}
	}
	puts("}");
}

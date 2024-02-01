#include "hash_tables.h"

/**
 * hash_table_create - it creates a hash table
 * @size: the size of the array block
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_map;

	/* check for invalid sizes, esp. when size is 0 */
	if (!size)
		return (NULL);

	/* allocate memory for the entire hash table */
	hash_map = malloc(sizeof(hash_table_t));
	if (hash_map == NULL)
		return (NULL); /* memory allocation fail */

	hash_map->size = size;

	/* allocate memory & initialize the array of linked lists */
	hash_map->array = calloc(hash_map->size, sizeof(hash_node_t *));
	if (hash_map->array == NULL)
	{
		free(hash_map);
		hash_map = NULL;
		return (NULL); /* memory allocation fail for the array */
	}

	/* return the newly created hash map */
	return (hash_map);
}

#include "hash_tables.h"
/**
 * hash_table_set - Add and element with the key/value to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1(Success) 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	hash_node_t *match = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !(*key) || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (0);
	if (ht->array[index])
	{
		match = ht->array[index];
		while (match)
		{
			if (!(strcmp(match->key, key)))
			{
				free(match->value);
				match->value = strdup(value);
				return (1);
			}
		match = match->next;
		}
	}
	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (!(element->key) || !(element->value))
	{
		if (element->key)
			free(element->key);
		free(element);
		return (0);
	}
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}

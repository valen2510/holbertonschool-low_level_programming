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
	unsigned long int index = 0;

	if (!ht || !key || !value || !(*key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (0);

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);

	element->key = strdup(key);
	element->value = strdup(value);
	if (!(element->key) || !(element->value))
		return (0);

	if (ht->array[index] != NULL)
	{
		element->next = ht->array[index];
		ht->array[index] = element;
		return (1);
	}
	element->next = NULL;
	ht->array[index] = element;
	return (1);
}

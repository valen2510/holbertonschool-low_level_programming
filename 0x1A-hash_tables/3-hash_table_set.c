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
	hash_node_t *current = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || !(*key))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (0);

	element = malloc(sizeof(hash_node_t));
	element->key = strdup(key);
	element->value = strdup(value);

	if ((match_element(key, ht->array[index])) == 0 || ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (current->next)
			current = current->next;

		element->next = current->next;
		current->next = element;
		return (1);
	}
	element->next = NULL;
	ht->array[index] = element;
	return (1);
}
/**
 * match_element - Check if a key value is already in a bucket.
 * @key: key
 * @array: bucket
 * Return: 1(No match Found) 0 (Match Found)
 */
int match_element(const char *key, hash_node_t *array)
{
	hash_node_t *match = array;


	while (match)
	{
		if (strcmp(match->key, key) == 0)
			return (0);
		match = match->next;
	}
	return (1);
}

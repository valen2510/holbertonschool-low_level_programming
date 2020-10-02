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
	int match = 1;

	if (!ht || !key || !(*key) || !value)
	{
		printf("here");
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (!index)
		return (0);

	match = match_element(key, ht->array[index], value);
	if (!match)
		return (1);

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (!(element->key) || !(element->value))
	{
		free(element);
		if (!element->value || element->key)
			free(element->key);
		return (0);
	}

	if (ht->array[index])
	{
		element->next = ht->array[index];
		ht->array[index] = element;
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
 * @value: node value to update
 * Return: 1(No match Found) 0 (Match Found)
 */
int match_element(const char *key, hash_node_t *array, const char *value)
{
	hash_node_t *match = array;

	while (match)
	{
		if (strcmp(match->key, key) == 0)
		{
			free(match->value);
			match->value = strdup(value);
			return (0);
		}
		match = match->next;
	}
	return (1);
}

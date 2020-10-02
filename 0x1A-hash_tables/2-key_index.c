#include "hash_tables.h"
/**
 * key_index - function to get the index of a key
 * @key: key of the value
 * @size: size of the pointers array
 * Return: index at the key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}

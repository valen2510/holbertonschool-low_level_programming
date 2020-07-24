#include "lists.h"
/**
 * add_node_end - add new node at the end of the list
 * @head: pointer to pointer first
 * @str: entry string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	temp = NULL;

	temp = malloc(sizeof(list_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = len_str(str);

	while (*head)
		head = &(*head)->next;

	temp->next = *head;

	*head = temp;

	return (temp);
}
/**
 * len_str - find string length
 * @str: entry string
 * Return: string length
 */
int len_str(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}

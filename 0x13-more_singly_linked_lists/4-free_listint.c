#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head;
		head = current_node->next;
		free(current_node);
	}

}

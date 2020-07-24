#include "lists.h"
/**
 * free_list - Free all the list_t list
 * @head: poiter to the first node
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}

}

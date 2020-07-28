#include "lists.h"
/**
 * free_listint2 - free a listint list
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *Current_Node;

	if (head == NULL)
		return;

	while (*head)
	{
		Current_Node = *head;
		*head = Current_Node->next;
		free(Current_Node);
	}

}

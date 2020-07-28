#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of the listint_t list
 * @head: double pointer to the address of head
 * @n: integer
 * Return: address of New_Node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_Node;

	New_Node = (listint_t *)malloc(sizeof(listint_t));

	if (!New_Node)
		return (NULL);

	else
	{
		New_Node->n = n;
		New_Node->next = *head;
		*head = New_Node;
	}
	return (New_Node);
}

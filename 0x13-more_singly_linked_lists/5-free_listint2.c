#include "lists.h"
/**
 * free_listint2 - function that frees a linked list,then sets the head to NULL
 * @head: pointer to the first  node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}

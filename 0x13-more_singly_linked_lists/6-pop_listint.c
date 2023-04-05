#include "lists.h"
/**
 * pop_listint - function to deletes the head node of a linked list.
 * @head: pointer to the first node of the linked list
 * Return: the data inside the node that was deleted,
 * or 0 if the node is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int head_info;

	if (!head || !*head)
		return (0);

	head_info = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);

	return (head_info);
}

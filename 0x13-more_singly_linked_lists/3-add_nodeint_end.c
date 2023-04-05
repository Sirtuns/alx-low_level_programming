#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: pointer to the first node in the singly linked list
 * @n: data to insert in the new node created at the end
 * Return: pointer to the new node, or NULL if it does not add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;
	return (*head);
}

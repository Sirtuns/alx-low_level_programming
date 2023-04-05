#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the linked list where new node
 * is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node = *head;
	size_t iter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head && !idx)
	{
		*head = new_node;
		return (new_node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		new_node->next = temp_node;
		*head = new_node;
		return (new_node);
	}

	while (i < (idx - 1))
	{
		temp_node = temp_node->next;
		i++;
	}
	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}

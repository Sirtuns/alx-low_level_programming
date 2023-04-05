#include "lists.h"
/**
 * get_nodeint_at_index - function to check the node at a certain index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to be returned
 * Return: pointer to the node to be checked, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t iter = 0;
	listint_t *temp_node = head;

	while (temp_node && iter < index)
	{
		temp_node = temp_node->next;
		iter++;
	}
	return (temp_node ? temp_node : NULL);
}

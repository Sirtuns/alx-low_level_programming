#include "lists.h"
/**
 * sum_listint - function to sum of all the data in a linked list
 * @head: pointer to the first node in the linked list
 * Return: sum of data in the linked list
 */
int sum_listint(listint_t *head)
{
	int list_sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		list_sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (list_sum);
}

#include "lists.h"
/**
 * print_listint_safe - A function that prints a linked list and loops safely.
 * @head: pointer to the 1st node of the linked list
 * Return: The new node or 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *list_num = NULL;
	size_t iter = 0;
	size_t new_node;

	temp_node = head;
	while (temp_node)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		iter++;
		temp_node = temp_node->next;
		list_num = head;
		new_node = 0;
		while (new_node < iter)
		{
			if (temp_node == list_num)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (iter);
			}
			list_num = list_num->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (iter);
}

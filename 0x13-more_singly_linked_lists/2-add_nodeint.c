#include "lists.h"
/**
 * add_nodeint - function to adds a new node at the start of a linked list
 * @head: pointer to the first node in the linked list
 * @n: data to be inserted in the new node at the start of the list
 * Return: pointer to the new node, or NULL if it does not add any
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));

	if (!new_head)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (*head);
}

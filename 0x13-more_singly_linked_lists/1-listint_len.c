#include "lists.h"

/**
 * count_listint_nodes - Counts the number of nodes in a linked list.
 * @head: Pointer to the head of the linked list of type listint_t.
 *
 * Return: The number of nodes in the linked list.
 */
size_t count_listint_nodes(const listint_t *head)
{
	size_t nodeCount = 0;

	while (head)
	{
		nodeCount++;
		head = head->next;
	}

	return (nodeCount);
}

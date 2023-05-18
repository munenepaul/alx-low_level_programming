#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t nodeCount = 0; /*Counter for the number of nodes*/

	if (head == NULL)
		return (nodeCount);

	while (head != NULL)
	{
		nodeCount++;
		head = head->next;
	}

	return (nodeCount);
}

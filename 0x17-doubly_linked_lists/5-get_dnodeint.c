#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: The index of the node, starting from 0
 *
 * Return: The nth node of the list, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}

	return (NULL);
}


#include "list.h"

/**
 * free_listint - frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_ t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

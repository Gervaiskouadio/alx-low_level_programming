#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

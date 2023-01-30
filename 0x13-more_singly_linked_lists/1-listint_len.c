#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: linked list type listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
	h = h->next;
	}
	return (numb);
}

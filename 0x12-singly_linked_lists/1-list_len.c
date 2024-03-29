#include "lists.h"

/**
 * list_len - returns the number elements in a linked
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

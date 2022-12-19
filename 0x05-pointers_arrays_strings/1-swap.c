#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, nb = 0;
	unsigned long int current;
	unsigned long int essential = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = essential >> i;
		if (current & 1)
			nb++;
	}

	return (nb);
}

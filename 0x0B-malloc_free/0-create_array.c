#include "main.h"

/**
 * create_array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int posit;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buf = (char *) malloc(size * sizeof(c));

	if (buf == 0)
	{
		return (NULL);
	}
	else
		posit = 0;
	while (posit < size) /*while for array*/
	{
		*(buf + posit) = c;
		posit++;
	}
	return (buf);
}

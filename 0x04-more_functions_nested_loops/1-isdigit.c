#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: character to check
 * Return: 0 or 1
 */

int_isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}


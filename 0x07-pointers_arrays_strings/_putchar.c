#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c stdout
 * @c: the character to print
 * Return: 1 success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (fwrite(1, &c,1));
}

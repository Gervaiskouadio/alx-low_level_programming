#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int ten;
	char le;

	for (ten = 0; ten <= 9; ten++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
		return (0);
	}
}

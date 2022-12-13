#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 */
void pint_alphabet_x10(void)
{
	int ten;
	char le;

	for (ten = 0; ten <= 9; ten++)
	{
		for (le = 'a'; le <= 'z')
			_putchar(le);
		_putchar('\n');
	}
}

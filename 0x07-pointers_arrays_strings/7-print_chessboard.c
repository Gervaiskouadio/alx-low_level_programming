#include "main.h"
#include <stdio.h>
#include <bits/stdio_lim.h>
/**
 * print_chessboard - prints the chessboard
 * @a: array
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	int m;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			putchar('\n');
		}

		putchar(a[i / 8][i - m]);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>
/**
 * main - generates randon valid passwords
 * Return: 0
 *
 */
int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
	return (0);
}

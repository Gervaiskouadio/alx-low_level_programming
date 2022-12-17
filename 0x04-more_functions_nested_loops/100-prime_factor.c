#include "main.h"
#include <stdio.h>

/**
 * main - prints largest priim factor
 * Return: always 0
 */
int main(void)
{
	long int n, fp;

	n = 61252475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}

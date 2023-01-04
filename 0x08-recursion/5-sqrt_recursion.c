#include "main.h"

/**
 * helperfunction - check if sqr of number exists
 * @num: number
 * @psqrt: possible sqrt of nummber.
 * Return: sqrt of number -1 for error.
 */
int helperfunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperfunction(num, psqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square of a number.
 * @n: number to find sqrt of.
 * Return: square root of n
 * -1 if n < 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n));
}

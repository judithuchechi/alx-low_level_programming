#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number that is inputted
 *
 * Return: 1 if number is 0, -1 if number is less than 0, else factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

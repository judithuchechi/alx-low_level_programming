#include "main.h"

/**
 * print_binary - function to convert number to binary
 * @n: unsigned long  int type;
 * Return: always successful
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

}

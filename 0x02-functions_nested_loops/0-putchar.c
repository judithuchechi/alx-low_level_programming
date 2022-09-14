#include "main.h"

/**
 * main -prints "_putchar" followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *h = "_putchar";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	_putchar('\n');


	return (0);
}

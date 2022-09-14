#include "main.h"

/**
 * print alphabet in lowercae followed by new line using _putchar function
 *
 */

void print_alphabet(void)
{
	int he;

	for (he = 'a'; he <= 'z'; ++he)
		_putchar(he);
	_putchar('\n');
}

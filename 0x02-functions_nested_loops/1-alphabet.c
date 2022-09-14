#include "main.h"

/**
 * main - entry point
 *
 * description: print alphabet in lowercase followed by new line using the _putchar function
 * 
 */

void print_alphabet(void)
{
	int he;

	for (he = 'a'; he <= 'z'; ++he)
		_putchar(he);
	_putchar('\n');
}

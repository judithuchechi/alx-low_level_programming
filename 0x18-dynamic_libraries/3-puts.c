#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

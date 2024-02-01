#include "main.h"

/**
 * _isupper - Checks for uppercase
 *
 * @c: the character to checked for case
 *
 * Return: 1 if c is uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

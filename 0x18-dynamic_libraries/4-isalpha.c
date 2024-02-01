#include "main.h"

/**
 * _isalpha - tests whether a character is from the English alphabet
 * @c: character to be checked
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: pointer to string character
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int cout;

	cout = 0;

	while (*s != '\0')
	{
		cout++;
		s++;
	}
	return (cout);
}

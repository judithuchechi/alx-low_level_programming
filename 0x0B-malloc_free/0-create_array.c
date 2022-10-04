#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char.
 *
 * @size: size of the char
 * @c: specific char to initialize array
 *
 * Return: pointer to the array, otherwise if null = 0 or function fails, NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}
	return (a);
}

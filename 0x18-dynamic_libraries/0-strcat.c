#include "main.h"

/**
 * _strcat - concatenates given two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[l] != '\0')
	{
		dest[k] = src[l];
		l++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}

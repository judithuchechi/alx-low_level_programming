#include "main.h"

/**
 * _strncpy - copies a string into another string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of src to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

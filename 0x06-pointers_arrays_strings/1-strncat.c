#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes used in src
 *
 * Return: pointer to string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int b = 0;

	/**
	 * interate through the src array;
	 * then, if there is no null byte among
	 * the first n bytes of src, the string
	 * placed in dest will not be null
	 * terminated
	 */

	while (dest[i++])
	{
		b++;
	}

	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	 */
	for (i = 0; src[i] && i < n; i++)
	{
		dest[b++] = src[i];
	}

	return (dest);
}

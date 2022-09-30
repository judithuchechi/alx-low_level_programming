#include "main.h"

/**
 * _memcpy - copies n bytes from a memory area to another
 * @dest: destination memory area
 * @src: source memory to copy from
 * @n: number of bytes to copy from src memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}

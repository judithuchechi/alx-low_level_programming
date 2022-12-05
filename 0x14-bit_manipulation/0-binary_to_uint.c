#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to string of '0' and '1' chaacters.
 *
 * Return: converted number or..
 * 0 if there is one of more chars in b that is not 0 or 1;
 * 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	unsigned int check = 1;
	int x;

	if (b == NULL)
		return (0);
	x = 0;
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		count <<= 1;
		if (b[x] == '1')
		{
			count ^= check;
		}
		x++;
	}
	return (count);
}

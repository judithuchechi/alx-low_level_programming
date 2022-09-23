#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @targ: string to be converted
 * Return: the string's pointer
 */
char *leet(char *targ)
{
	int x = 0, num[5] = {4, 3, 0, 1, 7}, y = 0;
	char alpha[10] = "AaEeOoLlTt";

	for (; targ[x]; x++)
	{
		for (y = 0; (targ[x] != alpha[y] && y < 10); y++)
			;
		if (targ[x] == alpha[y])
		{
			y /= 2;
			targ[x] = (num[y] + '0');
		}
	}
	return (targ);
}

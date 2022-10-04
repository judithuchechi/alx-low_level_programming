#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/
char *_strdup(char *str)
{
	int indx = 0, len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	/*calculate size of str*/
	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (str[indx] != '\0')
	{
		dup[indx] = str[indx];
		indx++;
	}

	return (dup);
}

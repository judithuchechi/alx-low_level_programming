#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int len1 = 0, len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of string1 & string2*/
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/*add +1 for end of string character*/
	newstr = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	if (newstr == NULL)
		return (NULL);

	/*add first string to array newstr*/
	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];

	/*add 2nd string to array newstr*/
	for (j = 0; s2[j] != '\0'; j++)
	{
		newstr[i] = s2[j];
		i++;
	}

	/* null terminate the new string*/
	newstr[i] = '\0';

	return (newstr);
}

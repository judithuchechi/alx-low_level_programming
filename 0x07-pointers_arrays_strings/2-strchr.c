#include "main.h"

/**
 * _strchr - searcjes for a character in a string
 * @s: pointer to string with character
 * @c: character being searched for
 *
 * Return: pointer to char, else 0 of not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}

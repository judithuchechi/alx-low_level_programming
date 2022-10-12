#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function to iterate through arrays
 * @array: pointer to array of int type
 * @size: type of size_t typedef
 * @action: pointer to function
 * Return: always successful
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;
	/* can also use this: */
	/* if (array == NULL || action == NULL)
		return; */

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}

	/* OR  while (size-- > 0)
	{
		action(*array);
		array++;
	} */

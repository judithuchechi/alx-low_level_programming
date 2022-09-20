/**
 * swap_int - swaps the value of two integers
 *
 * @a: parameter one
 * @b: parameter two
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

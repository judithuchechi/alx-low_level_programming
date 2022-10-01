#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments passed into it, each on a new line.
 *
 * @argc: number of arguments passed.
 * @argv: pointer to array of arguments passed
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

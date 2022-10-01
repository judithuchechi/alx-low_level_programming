#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of multiplication of 2 numbers followed by new line
 *
 * @argc: number of arguments being passed.
 * @argv: pointer to array of arguments passed
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");

	return (0);
}

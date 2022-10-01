#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the munber of arguments passed into the program.
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 *
 * Return: Always '0' (success).
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

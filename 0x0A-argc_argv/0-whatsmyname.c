#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the program name followed by a new line.
 * @argc: number of arguments passed to the program
 * @argv: pointer to array of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

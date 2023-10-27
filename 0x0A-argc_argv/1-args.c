#include <stdio.h>

/**
 * main - prints number of argumnts passed into it
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: always 0 successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

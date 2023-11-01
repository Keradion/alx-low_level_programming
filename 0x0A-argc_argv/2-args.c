#include <stdio.h>

/**
 * main - prints all arguments passed including its name
 * @argc: number of arguments
 * @argv: array of strings / arguments
 *
 * Return: always 0 successfull
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
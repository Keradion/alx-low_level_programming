#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: alwyas 0 sucessfull
 */
int main(int argc, char *argv[])
{
	int product  = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else

	{
		product = (num1) * (num2);
		printf("%d\n", product);
	}
	return (0);
}

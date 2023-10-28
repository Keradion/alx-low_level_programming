#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute sum of positive numbers
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: always 0 sucessfull
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int num = 0;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else 

	{

	for (i = 1; i < argc; i++)

	{
		if (argv[i] > '9' || argv[i] < '0')
			
		printf("%s\n", "Error");

		

		num = atoi(argv[i]);

		if (num >= 0)
		sum = sum + num;
		
	}
	printf("%d\n", sum);
	}
	
	return (0);
}

#include "3-calc.h"

/**
 * main - checks the code
 * @argc: number of arguments
 * @argv: array pointer to arguments
 * Return: int
 */

int main(int argc, char **argv[])
{
	int num1 = 0;
	int num2 = 0;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	/* parsing strings into integers */
	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);

	/* call for get_op_func to select appropirate fucntion to be executed */

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	/* prints the result of the operation followed by a new line */

	printf("%d\n", operation(num1, num2));
	return (0);
}

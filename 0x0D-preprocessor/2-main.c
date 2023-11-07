#include <stdio.h>
int main(void);

/**
 * main - prints the name of source file compiled
 *
 * Return: 0 success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

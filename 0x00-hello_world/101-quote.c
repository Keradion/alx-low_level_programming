#include <stdio.h>
#include <unistd.h>

/**
 * main - function that prints text on standard output
 *
 * Return: Always 0
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}

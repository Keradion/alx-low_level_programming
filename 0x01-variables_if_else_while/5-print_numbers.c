/*
 * Author : Daniel Berihun
 * Title : 5-print_numbers.c
 *
 */

#include <stdio.h>

/**
 * main - A C language program that prints all single digit numbers of base 10
 * starting from 0 followed by a new line .
 *
 * return - 0 Successful
 *
 */

int main(void)
{
	int i = 0;

while (i < 10)
{
	printf("%d", i);
i++;
}

printf("\n");
return (0);
}

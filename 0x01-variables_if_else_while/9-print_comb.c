/*
 * Author : Daniel Berihun
 * Title : 9-print_comb.c
 *
 */

#include <stdio.h>

/**
 * main - a C program that prints all possible combinations of single digits
 *
 * Return: Always 0
 */

int main(void)
{
int i = 48;
while (i < 57)
{
putchar(i);
putchar(44);
putchar(' ');
i++;
}
putchar(i);
putchar('\n');
return (0);
}

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
while (i < 58)
{
putchar(i);
while (i < 57)
{
putchar(44);
putchar(' ');
break;
}
i++;
}
putchar('\n');
return (0);
}

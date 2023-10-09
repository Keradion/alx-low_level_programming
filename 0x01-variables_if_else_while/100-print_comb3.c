/*
 * Author : Daniel Berihun
 * Title : 2-print_alphabet.c
 *
 */

#include <stdio.h>

/**
 * main - a C program that prints all possible different combinations of 2 digits 
 *
 * Return: Always 0
 */

int main(void)
{
int i = 48;
int j = 49;
while (i < 57)
{
while(j < 58)
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(44);
putchar(' ');
}
j++;
}
i++;
j=49;
}
return 0;
}

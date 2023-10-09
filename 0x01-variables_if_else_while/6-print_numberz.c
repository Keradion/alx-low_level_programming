
/*
 * Author : Daniel Berihun
 * Title : 6-print_numbers.c
 *
 */

#include <stdio.h>
/**
 * main - a C program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void) 
{
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return 0;
}

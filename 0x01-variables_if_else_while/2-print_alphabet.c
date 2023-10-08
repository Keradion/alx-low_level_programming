/*
 * Author : Daniel Berihun
 * Title : 2-print_alphabet.c
 *
 */

#include <stdio.h>

/**
 * main - a C program that prints all lowercase alphabetic charachters
 *
 * return: 0 Successful
 */

int main(void)
{
int i = 97;
while (i < 123)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}

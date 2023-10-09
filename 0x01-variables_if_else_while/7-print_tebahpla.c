
/*
 * Author : Daniel Berihun
 * Title : 7-print_tebahpla.c
 *
 */

#include <stdio.h>

/**
 * main - a C program that print all lowecase letters in reverse
 *
 * Return: Always 0
 */

int main(void)
{
int i = 122;
while (i > 96)
{
putchar(i);
--i;
}
putchar('\n');
return (0);
}

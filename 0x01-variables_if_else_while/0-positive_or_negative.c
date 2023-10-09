/*
 * Author : Daniel Berihun
 * Title : 2-print_alphabet.c
 *
 */

#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - a C program that check whether a given random number is + - or 0
 *
 * Return: Always 0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive", n);
putchar('\n');
}
else if (n < 0)
{
printf("%d is negative", n);
putchar('\n'); 
}
else
{ 
printf("%d is zero", n);
putchar('\n'); }
return (0);
}

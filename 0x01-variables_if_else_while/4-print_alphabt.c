
/*
 * Author : Daniel Berihun
 * Title : 4-print_alphabet.c
 *
 */

#include <stdio.h>

/**
 * main - A C program that prints all lowercase alphabetic charachters except P & q
 *
 * Return: Always 0
 */

int main() 
{
int i = 97;
while(i < 123)
{
if (i != 112 && i != 101)
putchar(i);
i++ ;
} 
putchar('\n');
return (0);
}

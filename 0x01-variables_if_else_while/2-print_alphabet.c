/*
 * Author : Daniel Berihun
 * Title : 2-print_alphabet.c
 *
 */

#include <stdio.h>

/**
 * main - Entry point
 * Description : a C program that prints all alphabetic charachters 
 * in lowercase followed by a new line .
 *
 * Return - 0 Successful
 *
 */

int main(void)
{ 
int i = 97;
while( i < 123)
    
{
putchar(i);
i++;
} 
putchar('\n');

return (0);
}

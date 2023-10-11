#include <stdio.h>
#include <stdint.h>
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */ 
int main(void)
{
unsigned long int first_term = 1;
unsigned long int second_term = 2;
unsigned long  int third_term;
int i = 1;

while (i <= 100)

{
    printf("%lu", first_term);
    if (i < 100)
    printf(", ");
    third_term = first_term + second_term;
    first_term = second_term;
    second_term = third_term;
    i++;
}

printf("\n");

    return (0);
}

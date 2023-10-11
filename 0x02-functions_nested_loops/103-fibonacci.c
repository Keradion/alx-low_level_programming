#include <stdio.h>
/**
 * main - a function that prints sum of even numbers in fibonacci series
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long int first_element = 1;
unsigned long int second_element = 2;
unsigned long int next_element = 0;
unsigned long int sum = 0;

while (first_element < 4000000)
{
if (first_element % 2 == 0)
{
sum = sum + first_element;
}
next_element = first_element + second_element;
first_element = second_element;
second_element = next_element;
}
printf("%lu", sum);
printf("\n");
return 0;
}

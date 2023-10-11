#include <stdio.h>
/**
 * main - a function that prints the first 50 numbers of the series
 *
 * Return: Always 0
 */

int main(void)
{
long int first_element = 1;
long int second_element = 2;
long int next_element;
long int i = 1;
while (i <= 50)
{
printf("%ld", first_element);
if (i < 50)
{printf(", ");
}
next_element = first_element  + second_element;
first_element = second_element;
second_element = next_element;
i++;
}
printf("\n");
return (0);
}

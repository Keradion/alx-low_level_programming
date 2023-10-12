#include <stdio.h>
/**
g* main - multiples of 3 and 5 as Fizz and Buzz 
 * FizBuzz for multiples of 3&5
 * Return: Always 0
 */

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf(" FizzBuzz");
}
else if (i % 3 == 0)
{
printf(" Fizz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else if (i == 1)
printf("%d", i);
else 
printf(" %d", i);
i++;
}
printf("\n");
return (0);
}

#include <stdio.h>
/**
 * main - prints sum of multiples of 3 and 5 < 1024
 *
 * Return: Always 0
 */

int main(void)
{
int number = 1;
int sum = 0;
while (number < 1024)
{
if (number % 3 == 0 || number % 5 == 0)
sum = sum + number;
number++;
}
printf("%d \n", sum);
return 0;
}

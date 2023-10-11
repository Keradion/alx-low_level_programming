#include "main.h"
#include <stdio.h>
/**
 * fibonacci - a function that prints the first 50 numbers of the series
 * @first_element: first digit of the series
 * @second_element: second digit of the series
 * @next_element: digit that follows the first and second digits
 *
 * Return: Always 0
 */

int main()
{
	fibonacci();
	return (0);
}

int fibonacci(void)
{
int first_element = 1;
int second_element = 2;
int next_element ;
int i = 1;
while (i <= 50)
{
next_element = first_element  + second_element;
first_element = second_element;
second_element = next_element;
if (next_element < 0 )
next_element = (- next_element);
printf("%d", next_element);
printf(", ");
i++;
}
printf("\n");
return (0);
}

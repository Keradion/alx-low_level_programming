#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check whether a number is prime
 * @n: number 
 *
 * Return: alwasy 0 sucess
 */
int is_prime_number(int n)
{
	int i = 2;
	int count = 1;

	if (n % i == 0)
	{
		if (i == n)	
		       	count++;
	}


       	if (count == 2)
		return (1);
	

	else
	{
		i++;
		return(is_prime_number(n));
	}
	return(1);
}

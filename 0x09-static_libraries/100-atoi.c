#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @s: char array
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int i, j = 0;
	int count = 0;
	int sign = 0;
        int digit = 0;
	int result = 0;

	while (s[j] != '\0')
	{

	if (s[j] == '-' || s[j] == '+')

       sign = -1;

	else 
		sign = 1;


	j++;	

	}


	i = 0;

	for (i = 0; i < count; i++)
	{
		digit = s[i] - '0';

		if (digit >= 0 && digit <= 9)
			result = result * 10 + digit;
	}
	return (result * sign);
}

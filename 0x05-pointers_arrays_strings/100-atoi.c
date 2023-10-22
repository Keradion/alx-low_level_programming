#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @s: char array
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int i = 0;
	int count = 0;
	int sign = 0;
	int digit = 0;
	int result = 0;

	if (s[0] == '-')

		sign = -1;
	else
		sign = 1;

	while (s[i] != '\0')
	{
		count++;
		i++;
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

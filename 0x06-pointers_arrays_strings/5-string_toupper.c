#include "main.h"

/**
 * string_toupper - changer all strings into upperCase
 * @str: string to be converted to uppercase
 *
 * Return: string in uppercase
 */

char *string_toupper(char *str)
{
	int j = 0;


	while (str[j] != '\0')
	{
		if ('a' <= str[j] && str[j] <= 'z')

		{
			str[j]  = str[j] - 32;
		}
		j++;
	}

	return (str);
}




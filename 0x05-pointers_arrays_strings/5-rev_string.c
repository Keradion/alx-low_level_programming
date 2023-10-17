#include "main.h"

/**
 * rev_string - a function that reverse a givn string
 * @s: string pointer variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	j = len - 1;

while (i < j)
{
char temp;
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;

}
}

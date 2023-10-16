#include "main.h"

/**
 * rev_string- print a string in reverse followed by a new line 
 * @s: string pointer variable
 *
 * Return: void
 */
void rev_string(char *s)
{ 
	int i = 0;
	int j = 0;
	
	while(s[i] !='\0')
	{
		j++;
		i++;
	}

	i = 0;

 while(i < j)
     {
	        char temp;
		temp = s[i]; 
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	
	}


}

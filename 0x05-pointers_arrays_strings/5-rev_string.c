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
	int j = 10;

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

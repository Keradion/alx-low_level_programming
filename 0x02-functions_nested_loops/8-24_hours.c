#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print day hours from 00:00 to 23:59
 *
 * Return: void
 */ 

void jack_bauer(void)
{
int i = 0;
int j = 0;
int k = 0; 
int l = 0;

while (i < 3)
{
while (j < 10)
{ 
while (k < 6)
{
while (l < 10)
{
if (!(i == 2 && j == 4 && k == 0 && l == 0))
{ 
printf("%d", i);
printf("%d", j);
printf(":%d", k);
printf("%d", l);
printf("\n");
l++;
}
else 
return;
}
k++;
l = 0;
}
j++;
k = 0;
l = 0;
}
i++;
k = 0;
l = 0;
j = 0;
}
}

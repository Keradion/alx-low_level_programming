#include "main.h"

/**
 * power - compute expeonentation
 * @n: power unit
 *
 * Return: result of exponentation 
 */

int power(int n)
{
	        int result = 1;
		        int exponent = n;
			        int i = 1;

				        if (exponent == 0)
						                return 1;


					        while(i <= exponent)
							        {
									                result = result * 2;
											                i++;
													        }

						        return result;
}


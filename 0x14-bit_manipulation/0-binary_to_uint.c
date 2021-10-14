#include "main.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
       	unsigned int num = 0, mult = 1;
	int len;

    	if (b == NULL)
	return (0);

	for (len = 0; b[len];)
	len++;
	for (len -= 1; len >= 0; len--)
	{
	if (b[len] != '0' && b[len] != '1')
	return (0);
	num += (b[len] - '0') * mult;
	mult *= 2;
}

return (num);
}

#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an
 * unsigned int
 * @b: pointer of number binary
 *
 * Return: the converted number, or 0 if
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int b2 = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			b2 = ((b2 * 2) + 1);
		}
		else if (b[i] == '0')
		{
			b2 = (b2 * 2);
		}
		else
			return (0);
	}
	return (b2);
}

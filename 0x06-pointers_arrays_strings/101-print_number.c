#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number with _putchar
 * @n: input number
 * Return: returns void
 **/
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
_putchar('-');
num = -n;
}
else ni=n;
 
if (num / 10 != 0)
print_number(num / 10);

_putchar((num % 10) + 48);
}

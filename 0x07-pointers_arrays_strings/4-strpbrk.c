#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s
 * @s: pointer with the location of the string
 * @accept: Character to check
 *
 * Return: pointer to byte or Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int len;
int i;
int j;

len = 0;

while (s[len] != '\0')
{
len++;
}
for (i = 0; i <= len; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
s = '\0';
return (s);
}

#include "main.h"
#include <stdio.h>
/**
 * natural_numbers - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 * @n: specify range
 * Return: Always 0.
 */
int natural_numbers(int n)
{
int i;
int sum = 0;

for (i = 3; i < n; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
sum = sum + i;
}
}
printf("%d\n", sum);
return (0);
}

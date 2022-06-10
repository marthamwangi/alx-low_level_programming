#include "main.h"

/**
 * print_last_digit - last digit of a number
 *
 * @n:number to be checked
 * Return: n % 10  last digit
 */

int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
_putchar(-last + 48);
return (-last);
}
else
{
_putchar(last + 48);
return (last);
}
}

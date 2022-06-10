#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: n times table
 * Return: int
 */
void print_times_table(int n)
{
int i;
int j;
int multiple;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar(48);
for (j = 1; j <= n; j++)
{
multiple = i * j;
_putchar(44);
_putchar(32);
if (multiple <= 9)
{
_putchar(32);
_putchar(32);
_putchar(multiple + 48);
}
else if (multiple <= 99)
{
_putchar(32);
_putchar((multiple / 10) + 48);
_putchar((multiple % 10) + 48);
}
else
{
_putchar(((multiple / 100) % 10) + 48);
_putchar(((multiple / 10) % 10) + 48);
_putchar((multiple % 10) + 48);
}
}
_putchar('\n');
}
}
}

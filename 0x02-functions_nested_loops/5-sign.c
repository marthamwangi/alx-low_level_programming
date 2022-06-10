#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n:number to be checked
 * Return: 1 (Positive), -1 (Neagtive), 0 (Neutral)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

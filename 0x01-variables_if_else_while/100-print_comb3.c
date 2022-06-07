#include<stdio.h>
/**
 * main -print single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int tens;
	int ones;

	for (number = 0; number < 90; number++)
	{
		tens = (number / 10 + '0');
		ones = (number % 10 + '0');
	if (tens != ones)
	{
		putchar(tens);
		putchar(ones);
		if (number != 89)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
return (0);
}

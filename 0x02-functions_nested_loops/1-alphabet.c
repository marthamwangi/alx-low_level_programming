#include "main.h"
/**
 * print_alphabet - print a to z
 *
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

		_putchar('\n');
}

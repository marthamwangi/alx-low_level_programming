#include "main.h"
/**
 * _islower - check if lowercase
 * 
 * Return:  0 (lowercase), 1 (uppercase)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

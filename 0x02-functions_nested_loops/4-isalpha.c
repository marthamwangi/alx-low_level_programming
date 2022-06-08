#include "main.h"
/**
 * _isalpha - check if lowercase
 * @c: We check this character
 * Return:  0 (lowercase), 1 (uppercase)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

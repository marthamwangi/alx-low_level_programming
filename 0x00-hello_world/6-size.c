#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char _char;
int _int;
long int _long_int;
long long int llint;
float _float;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(_char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(_int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(_long_int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llint));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(_float));
return (0);
}

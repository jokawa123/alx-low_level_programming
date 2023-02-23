#include "main.h"

/**
 * print_last_digit-prints the last digit of a number.
 *
 * @n:number to check.
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int l = _abs(n % 10);
_putchar(l + '0');
return (l);
}

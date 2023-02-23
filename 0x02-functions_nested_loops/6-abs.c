#include "main.h"

/**
 * abs-computes the absolute value of an integer.
 *
 * @n:number to check.
 *
 * Return: abs value
 */
int _abs(int n)
{
int m = n;
if (m < 0)
{
m = m * (-1);
}
return (m);
}

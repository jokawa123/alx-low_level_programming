#include <stdio.h>

#include "main.h"

/**
 * print_to_98-prints all natural numbers from n to 98.
 *
 * @n:number to check.
 *
 * Return: void
 */
void print_to_98(int n)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
printf("%d\n", n);
}

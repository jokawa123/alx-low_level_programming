#include <stdio.h>

#include "main.h"

/**
 * print_98-prints all natural numbers from n to 98.
 *
 * @n:number to check.
 *
 * Return: values from n to 98
 */
void print_98(int n)
{
for (; n <= 98; n--)
{
printf("%d, ", n);
}
printf("\n");
}

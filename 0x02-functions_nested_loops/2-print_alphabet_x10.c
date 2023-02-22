#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase.
 * 
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
int i, size;
char l;
size = 10;
for (i = 0; i <= size; i++)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}


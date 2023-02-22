#include "main.h"

/**
 * _islower-check if character is lowercase.
 *
 * @c:character to check if it islowercase.
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
return ((int) (c >= 'a' && c <= 'z'));
}

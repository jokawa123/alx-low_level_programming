#include "main.h"

/**
 * _isalpha-check if character is a letter, lowercase or uppercase.
 *
 * @c:character to check if it islowercase.
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
return ((int)((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z')));
}

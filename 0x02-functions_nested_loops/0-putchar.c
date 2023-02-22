#include "main.h"

int main(void)
{
char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i;
int size = sizeof(ch) / sizeof(ch[0]);
for (i = 0; i < size; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
return (0);
}

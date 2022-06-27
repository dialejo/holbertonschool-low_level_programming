#include "main.h"

/**
 * print_alphabet_x10 - print ten times de alphabet
 *
 */

void print_alphabet_x10(void)
{
int n, mul;
mul = 0;

while (mul < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
mul++;
_putchar('\n');
}
}

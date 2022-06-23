#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
int x, y;
int z = 0;
for (y = 0 ; s[y] != '\0' ; y++)
z++;
for (x = (z - 1) ; x >= 0 ; x--)
_putchar(s[x]);
}

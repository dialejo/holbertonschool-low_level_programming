#include "main.h"
#include <stdio.h>

/**
 * rev_string - array to display the array
 *
 * @s: string
 *
 */

void rev_string(char *s)
{
int i, x, y;
int t = 0;
for (y = 0 ; s[y] != '\0' ; y++)
_putchar(s[y]);
for (i = 0 ; s[i] != '\0' ; i++)
t++;
_putchar('\n');
for (x = t - 1 ; x <= 0 ; x--)
_putchar(s[x]);
_putchar('\n');
}

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
int i, x;
int t = 0;
for (i = 0 ; s[i] != '\0' ; i++)
t++;
_putchar(s[i);
for (x = t - 1 ; x >= 0 ; x--)
_putchar(s[x]);
_putchar('\n');
}

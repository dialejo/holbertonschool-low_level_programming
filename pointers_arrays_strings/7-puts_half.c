#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - display half of the spring
 *
 * @str: string
 *
 *
 */

void puts_half(char *str)
{
int len, x, y;
len = (strlen(str) / 2);

if (len % 2 == 0)
	for (x = len + 1 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
else
	for (y = len ; str[y] != '\0' ; y++)
		_putchar(str[y]);
_putchar('\n');
}

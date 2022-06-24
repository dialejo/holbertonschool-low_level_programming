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
char pointer  = s[0];
int i = 0;
int x;
while (s[i] != '\0')
	i++;
for (x = 0 ; x < i ; x++)
{
	i--;
	pointer = s[x];
	s[x] = s[i];
	s[i] = pointer;
}
}

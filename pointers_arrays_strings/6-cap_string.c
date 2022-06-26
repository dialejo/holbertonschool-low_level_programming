#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - string to upper case
 * @a: string
 * Return: cero
 */

char *string_toupper(char *a)
{
int i, j;
char separadores[] = " \t\n,;.!?\"(){}";
i = 1;

if (a[0] >= 'a' && a[0] <= 'z')
	a[0] -= ('a' - 'A');

while (a[i] != '\0')
{
	for (j = 0; separadores[j] != '\0'; j++)
		if (a[i - 1] == separadores[j] && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] -= ('a' - 'A');
	i++;
}
return (a);
}

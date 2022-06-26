#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - string to upper case
 * @s: string
 * Return: cero
 */

char *string_toupper(char *s)
{
int i, j;
char separadores[] = " \t\n,;.!?\"(){}";
i = 1;

if (s[0] >= 'a' && s[0] <= 'z')
	s[0] -= ('a' - 'A');

while (s[i] != '\0')
{
	for (j = 0; separadores[j] != '\0'; j++)
		if (s[i - 1] == separadores[j] && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= ('a' - 'A');
	i++;
}
return (s);
}

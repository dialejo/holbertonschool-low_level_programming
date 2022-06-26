#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - string to upper case
 * @*: string
 * Return: cero
 */

char *string_toupper(char *)
{
int i, j;
char separadores[] = " \t\n,;.!?\"(){}";
i = 1;

if (*[0] >= 'a' && *[0] <= 'z')
	*[0] -= ('a' - 'A');

while (*[i] != '\0')
{
	for (j = 0; separadores[j] != '\0'; j++)
		if (*[i - 1] == separadores[j] && (*[i] >= 'a' && *[i] <= 'z'))
			*[i] -= ('a' - 'A');
	i++;
}
return (s);
}

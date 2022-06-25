#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - string to upper case
 *
 * @a: string
 *
 * Return: cero 
 */
char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0' ; i++)
{
	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 'a' - 'A';
}
return (a);
}

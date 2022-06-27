#include "main.h"
#include <stdio.h>

/**
 * *_putchar - print putchar and space
 * @s: string
 * Return: s
 */
void *_putchar(char *s)
{
int i;
s[i] = "_putchar";
for (i = 0 ; s[i] != '\0' ; i++)
return (s);
return ('\n');
}

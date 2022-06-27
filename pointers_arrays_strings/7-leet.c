#include "main.h"
#include <stdio.h>

/**
 * *leet - swicth the words for numbers
 * @s: string
 * Return: s
 */

char *leet(char *s)
{
int i, j;
char cond[] = "aAeEoOtTlL";
char swicth[] = "43071";
for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0; cond[j] != '\0'; j++)
	if (s[i] == cond[j])
		s[i] = swicth[j / 2];
}
return (s);
}


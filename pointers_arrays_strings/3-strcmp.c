#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compare a string
 * @s1: string
 * @s2: string
 * Return: cero;
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int y = 0;
int x, t, z;

for (t = 0 ; s1[t] != '\0' ; t++)
	i++;
for (x = 0 ; s2[x] != '\0' ; x++)
	y++;
if (i < y)
	z = (-15);
else if (i > y)
	z = (15);
return (0);
}


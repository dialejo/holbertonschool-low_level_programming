#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy - concatena dos strings
 * @dest: string 1
 * @src: string 2
 * @n: count of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; src[i] != '\0' && i < n; i++)
	dest[i]	= src[i];
while (i < n)
	dest[i++] = '\0';
return (dest);
}


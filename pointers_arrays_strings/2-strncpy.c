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
int i;
for (i = 0 ; dest[i] < n ; i++)
{
	dest[i] = src[i];
if (dest[i] == n)
	dest[i] = '\0';
}
return (dest);
}


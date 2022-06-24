#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - concatena dos strings
 * @dest: string 1
 * @src: string 2
 * @n: count of bytes
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
int i, x;
for (i = 0 ; dest[i] != '\0' ; i++)
{
}
for (x = 0 ; x < n ; x++)
{
	dest[i + x] = src[x];
	if (src[x] == '\0')
		x = n;

}
return (dest);
}


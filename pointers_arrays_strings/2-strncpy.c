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
while{ i < n && src[i] != '\0')

	dest[i] = src[i];
	i++;
if (src[i] == '\0')
	dest[i] = '\0';
}
return (dest);
}


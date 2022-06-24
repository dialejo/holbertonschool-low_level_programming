#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - concatena dos strings
 * @dest: string 1
 * @src: string 2
 * @*dest: pointer 1
 * @*src: pointer 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, x;
for (i = 0 ; dest[i] != '\0' ; i++)
{
}
for (x = 0 ; (dest[i + x] = *src++) != '\0' ; x++)
{
}
return (dest);
}


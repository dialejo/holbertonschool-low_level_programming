#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - copy de pointer
 *
 * @dest: pointer
 * @src: string
 *
 * return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
char ptr;
for (i = 0 ; src[i] <= '\0' ; i++)
putchar(src[i]);
ptr = _strcpy(dest[i], src[i]);
return (ptr);
}

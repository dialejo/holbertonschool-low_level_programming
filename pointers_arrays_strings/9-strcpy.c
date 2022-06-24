#include <stdio.h>
#include <string.h>
#include <main.h>

/**
 * *_strcpy - copy de pointer
 *
 * @dest: pointer
 * @src: string
 *
 * return: cero
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0 ; src[i] <= '\0' ; i++)
{
printf(src[i]);
dest = _strcpy(src[i]);
printf(dest);
return (0);
}
}

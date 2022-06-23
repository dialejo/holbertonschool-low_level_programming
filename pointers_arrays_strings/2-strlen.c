#include "main.h"
#include <stdio.h>

/**
 * int _strlen - print the len of the array
 *
 *@s : string
 *
 * Return the len of the array
 */

void int_strlen(char *s)
{
int i;
int z = 0;
for (i = 0 ; s[i] != '\0' ; i++)
z++;
return (z);
}

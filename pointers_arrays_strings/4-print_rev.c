#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int i, len,temp;
	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = str1[len - i - 1];
		str1[len -i -1] = temp;
	}
}

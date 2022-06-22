#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap value of variables.
 *  @a: variable a.
 *  @b: variable b.
 *  c: variable.
 *  return: cero.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - display a array in reverse
 * @a: string
 * @n: number of strings
 *
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0 ; i < n; i++)
{
	n--;
	temp = a[i];
	a[i] = a[n];
	a[n] = temp;
}
}

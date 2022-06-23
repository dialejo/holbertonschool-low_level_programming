#include <stdio.h>
#include <string.h>
#include <stdio.h>

/**
 * print_array - display the array
 *
 * @a : array
 *
 * @n : number of elements
 *
 */

void print_array(int *a, int n)
{

int i;

for (i = 0 ; i < n ; i++)
	printf("%s", a[i]);
	if (i != n)
		printf(",");
		printf(" 2);
}

#include <stdio.h>
/**
 * main - prints backwards.
(*
 * Return: cero
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

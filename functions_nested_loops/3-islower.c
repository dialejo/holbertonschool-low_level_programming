#include "main.h"

/**
 * _islower - print if it's lower
 * @c:  string
 * Return: 1 or 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}

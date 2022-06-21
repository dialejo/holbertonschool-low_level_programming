/**
 * _isupper - checks for uppercase.
 * @d: character to check.
 * Return: 1 if c is uppercase, otherwise return 0.
 */
int _isupper(int d)
{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);
}

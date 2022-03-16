/**
 * _isalpha - checks for alphabets.
 * @c: character to check
 *
 * Return: 1 if c is an alphabet and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}

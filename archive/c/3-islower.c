/**
 * _islower - checks for lowercase character.
 * @c: character to check
 *
 * Return: 1 if c is lower and 0 otherwise.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}

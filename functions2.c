#include"main.h"
/**
 * rot13 - encryption algorithm.
 * @s: string
 * Return: count.
 */
int rot13(char *s)
{
	int i = 0;
	int count = 0;
	if (!s)
		return (_puts("(nil)"));
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			count += _putchar(s[i] += 13);
		if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			count += _putchar(s[i] -= 13);

		i++;
	}
	return (count);
}

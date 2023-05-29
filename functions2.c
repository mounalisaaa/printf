#include "main.h"
/**
 * rot13 - encryption algorithm.
 * @s: string
 * Return: count.
 */
int rot13(char *s)
{
	int count = 0;

	if (!s)
		return (_puts("(null)"));

	while (*s)
	{
		if ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122))
		{
			if (*s <= 77 || *s <= 109)
				count += _putchar(*s + 13);
			else
				count += _putchar(*s - 13);
		}
		else
		{
			count += _putchar(*s);
		}

		s++;
	}

	return (count);
}

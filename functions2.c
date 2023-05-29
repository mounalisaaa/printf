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
/**
 *  print_rev - print string to stdout in reverse.
 * @s: pointer to string.
 * Return: Always 0.
 */

int print_rev(char *s)
{
	int count = 0;
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		count += _putchar(s[i]);
	}
	return (count);
}

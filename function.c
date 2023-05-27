#include "main.h"
/**
 * _puts - print string.
 * @s: string.
 * Return: the len of the str.
 */

int _puts(char *s)
{
	int i = 0;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * print_integer - fun that prints integer.
 * @n: integer.
 * Return: count.
 */
int print_integer(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		if (n == -2147483648)
		{
			count += _putchar('2');
			n %= 1000000000;
		}
		count += print_integer(-n);
	}
	else if (n >= 0 && n <= 9)
	{
		count += _putchar(n + '0');
	}

	else
	{
		count += print_integer(n / 10);
		count += _putchar((n % 10) + '0');
	}
	return (count);
}
int binary(int n)
{
	int count = 0;

	if (n > 1)
	{
		count = binary(n / 2);
	}
	count += _putchar(n % 2 + '0');
	return (count);
}

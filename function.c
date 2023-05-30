#include "main.h"
/**
 * _putchar - print char
 * @c: character.
 * Return: write.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
/**
 * binary - convert unsigned integer to binary.
 * @n: unsigned int.
 * Return: count.
 */
int binary(unsigned int n)
{
	int count = 0;

	if (n > 1)
	{
		count = binary(n / 2);
	}
	count += _putchar(n % 2 + '0');
	return (count);
}
/**
 * print_unsigned_integer - print unsigned integer.
 * @n: unsigned integer.
 * Return: count.
 */
int print_unsigned_integer(unsigned int n)
{
	int count = 0;

	if (n <= 9)
	{
		count += _putchar(n + '0');
	}
	else
	{
		count += print_unsigned_integer(n / 10);
		count += _putchar(n % 10 + '0');
	}
	return (count);
}

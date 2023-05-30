#include "main.h"
/**
 * print_octal - convert unsigned int into octal.
 * @n: unsigned int.
 * Return: count.
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n > 7)
	{
		count = print_octal(n / 8);
	}
	count += _putchar(n % 8 + '0');
	return (count);
}
/**
 * print_HEX - convert decimal to hexadecimal with uppercase
 * @n: integer.
 * Return: count
 */
int print_HEX(unsigned int n)
{
	int count = 0;

	if (n > 15)
		count += print_HEX(n / 16);
	if (n % 16 < 10)
		count += _putchar(n % 16 + '0');
	else
		count += _putchar(n % 16 - 10 + 'A');
	return (count);
}
/**
 * print_hex - convert decimal to hexadecimal with lowercase
 * @n: integer.
 * Return: count
 */
int print_hex(unsigned int n)
{
	int count = 0;

	if (n > 15)
		count += print_hex(n / 16);
	if (n % 16 < 10)
		count += _putchar(n % 16 + '0');
	else
		count += _putchar(n % 16 - 10 + 'a');
	return (count);
}
/**
 * print_unpritable - print string.
 * @str: str.
 * Return: count.
 */
int print_unpritable(char *str)
{
	int count = 0;
	int ascii;

	if (!str)
		return (_puts("(null)"));
	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			count += _putchar(*str);
		}
		else
		{
			count += _puts("\\x");
			ascii = (int)(*str);
			if (ascii < 16)
				count += _putchar('0');
			count += print_HEX(ascii);
		}
		str++;
	}
	return (count);
}
/**
 * print_hex_l - convert decimal to hexadecimal with lowercase
 * @n: integer.
 * Return: count
 */
int print_hex_l(unsigned long n)
{
	int count = 0, r, j;
	char arr[64];
	int i = 0;
	char hex[] = "0123456789abcdef";

	while (n)
	{
		r = n % 16;
		arr[i] = r;
		n = n / 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(hex[(int)arr[j]]);
	}
	return (count);
}

#include"main.h"
/**
 * print_HEX - convert decimal to hexadecimal with uppercase
 * @n: integer.
 * Return: count
*/
int print_HEX(unsigned int n)
{
	int count = 0;

	if (n > 15)
	{
		count += print_HEX(n / 16);
	}
	if (n % 16 < 10)
	{
		count += _putchar(n % 16 + '0');
	}
	else
	{
		count += _putchar(n % 16 - 10 + 'A');
	}
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
	{
		count += print_hex(n / 16);
	}
	if (n % 16 < 10)
	{
		count += _putchar(n % 16 + '0');
	}
	else
	{
		count += _putchar(n % 16 - 10 + 'a');
	}
	return (count);
}

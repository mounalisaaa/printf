#include "main.h"
int _puts(char *s);
void print_integer(int n);
/**
 * _printf - printf's twin
 * @format: list of types of args.
 * Return: num of characters excluding the '\0'.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;
	int c;
	int di;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			{
				if (format[i] == 'c')
				{
					c = va_arg(args, int);
					_putchar(c);
					count++;
				}
				else if (format[i] == 's')
				{
					s = va_arg(args, char *);
					count += _puts(s);
				}
				else if (format[i] == '%')
				{
					_putchar('%');
					count++;
				}
				else if (format[i] == 'd' || format[i] == 'i')
				{
					di = va_arg(args, int);
					print_integer(di);
					count++;
				}
				else
				{
					_putchar(format[i]);
					count++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/**
 * _puts - print string.
 * @s: string.
 * Return: the len of the str.
 */

int _puts(char *s)
{
	int ind = 0;

	while (s[ind])
	{
		_putchar(s[ind]);
		ind++;
	}
	return (ind);
}
/**
 * print_integer - fun that prints integer.
 * @n: integer.
 */
void print_integer(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n %= 1000000000;
		}
		print_integer(-n);
	}
	else if (n <= 9)
	{
		_putchar(n + '0');
	}

	else
	{
		print_integer(n / 10);
		print_integer(n % 10);
	}
}

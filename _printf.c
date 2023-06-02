#include "main.h"
/**
 * help_printf - helper function
 * @c: character,
 * @args: arguments
 * Return: count.
 */
int help_printf(char c, va_list args)
{
	int count = 0;

	if (c == 'c')
		count = _putchar(va_arg(args, int));
	else if (c == 's')
		count = _puts(va_arg(args, char *));
	else if (c == '%')
		count = _putchar('%');
	else if (c == 'd' || c == 'i')
		count = print_integer(va_arg(args, int));
	else if (c == 'b')
		count = binary(va_arg(args, unsigned int));
	else if (c == 'u')
		count = print_unsigned_integer(va_arg(args, unsigned int));
	else if (c == 'o')
		count = print_octal(va_arg(args, unsigned int));
	else if (c == 'x')
		count = print_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		count = print_HEX(va_arg(args, unsigned int));
	else if (c == 'S')
		count = print_unpritable(va_arg(args, char *));
	else if (c == 'p')
		count = memory_address(va_arg(args, void *));
	else if (c == 'r')
		count = print_rev(va_arg(args, char *));
	else if (c == 'R')
		count = rot13(va_arg(args, char *));
	else
	{
		count += _putchar('%');
		count += _putchar(c);
	}
	return (count);
}
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

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			{
				if (format[i] == '+')
				{
					i++;
					count += flags(format[i], args);
				}
				else
					count += help_printf(format[i], args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

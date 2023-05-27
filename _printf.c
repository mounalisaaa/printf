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
	{
		count = _putchar(va_arg(args, int));
	}
	else if (c == 's')
	{
		count = _puts(va_arg(args, char *));
	}
	else if (c == '%')
	{
		count = _putchar('%');
	}
	else if (c == 'd' || c == 'i')
	{
		count = print_integer(va_arg(args, int));
	}
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

	if (format[0] == '%' && !format[1])
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			{
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

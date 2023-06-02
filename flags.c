#include "main.h"
/**
 * flags - function that adds + to an integer.
 * @c: char
 * @args: args
 * Return: count.
*/
int flags(char c, va_list args)
{
	int count = 0;

	count += _putchar('+');
	count += help_printf(c, args);	/*to be continued*/
	return (count);
}

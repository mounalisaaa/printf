#include "main.h"
int flags(char c, va_list args)
{
	int count = 0;

	count += _putchar('+');
	count += help_printf(c, args);
	return (count);
}
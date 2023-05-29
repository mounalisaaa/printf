#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stddef.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	
	_printf("%S\n", "Best\nSchool");
	len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, 123);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, 123);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("%b\n", -4);
	len2 = printf("%b\n", -4);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Mounaxnane\n");
	len2 = printf("Mounaxnane\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	len = _printf("Negative:[%d]\n", -2147483648);
	len2 = printf("Negative:[%d]\n", -2147483647);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	_printf("");
	printf("Len:[%d]\n", len2);
	_printf("\n");

	return (0);
}

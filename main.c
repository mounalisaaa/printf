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
	void *addr;
	char s[] = "Hello";
    int p;

	addr = (void *)0x7ffe637541f0;
	ui = (unsigned int)INT_MAX + 1024;

    p = rot13(s);
    _printf("%R\n", p);
	len = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
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

	return (0);
}

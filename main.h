#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include<stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char s);
int help_printf(char c, va_list args);
int _puts(char *s);
int print_integer(int n);

#endif

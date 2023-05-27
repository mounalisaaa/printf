#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int help_printf(char c, va_list args);
int _puts(char *s);
int print_integer(int n);
int binary(unsigned int n);
int print_unsigned_integer(unsigned int n);
int print_octal(unsigned int n);
int print_HEX(unsigned int n);
int print_hex(unsigned int n);

#endif

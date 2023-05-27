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

len = _printf("%");
len2 = printf("%");
_printf("Length:[%d, %i]\n", NULL, len);
printf("Length:[%d, %i]\n", len2, len2);

len = _printf("Negative:[%d]\n", -2147483648);
len2 = printf("Negative:[%d]\n", -2147483648);
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

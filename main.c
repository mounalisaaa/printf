#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -2147483648);
        printf("Negative:[%d]\n", -2147483648);

    return (0);
}
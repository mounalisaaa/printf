#include "main.h"
/**
 * rot13 - encryption algorithm.
 * @s: string
 * Return: count.
 */
/*int rot13(char *s)
{
	int i = 0;
	int count = 0;

	if (!s)
		return (_puts("(null)"));
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			count += _putchar(s[i] += 13);
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			count += _putchar(s[i] -= 13);
		else
			count += _putchar(s[i]);

		i++;
	}
	return (count);
}*/
int rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEAFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; data1[j] != '\0'; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (_puts(s));
}

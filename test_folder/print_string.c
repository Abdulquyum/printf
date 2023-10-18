#include "main.h"

/**
 * print_string - prints string
 *
 * @printable parameter for array of string
 *
 * Return: strings
 */
int print_string(va_list printable)
{
	int q;
	char *str = va_arg(printable, char *), string;

	for (q = 0; str[q] != '\0'; q++)
	{
		string = str[q];
		_putchar(string);

	}
	return (0);
}

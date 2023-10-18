#include "main.h"

/**
 * _print_char - prints character
 *
 * printable - printable character
 *
 * Return: printed arg
 */
int _print_char(va_list printable)
{
	char c = va_arg(printable, int);

	return (write(1, &c, 1));
}

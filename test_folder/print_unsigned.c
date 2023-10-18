#include "main.h"

/**
 * handle_unsigned - handle unsigned int
 *
 * @n: parameter for argument passed
 *
 * Return: 0
 */
int handle_unsigned(va_list printable)
{
	unsigned int n = va_arg(printable, unsigned int);

	if (n <= 0)
		return (0);

	handle_unsigned(printable);
	_putchar(n % 10 + '0');
	return (0);
}

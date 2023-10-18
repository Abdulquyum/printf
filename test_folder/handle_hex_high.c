#include "main.h"

/**
 * to_hexadec - convers decimal to hexadecimal
 *
 * @n: argument
 *
 * Return: 0
 */
int to_hexadec_high(va_list printable)
{
	unsigned int n = va_arg(printable, unsigned int);
	int r;

	if (n == 0)
		return (0);

	r = n % 16;
	to_hexadec_high(printable);
	if (r < 10)
		_putchar(r + '0');
	else
		_putchar('A' + r - 10);

	return (0);
}
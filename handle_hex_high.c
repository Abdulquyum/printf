#include "main.h"

/**
 * to_hexadec - convers decimal to hexadecimal
 *
 * @n: argument
 *
 * Return: 0
 */
unsigned int to_hexadec_high(unsigned int n)
{
	int r;

	if (n == 0)
		return (0);

	r = n % 16;
	to_hexadec_high(r /16);
	if (r < 10)
		_putchar(r + '0');
	else
		_putchar('A' + r - 10);

	return (0);
}

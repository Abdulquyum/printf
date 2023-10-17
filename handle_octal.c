#include "main.h"

/**
 * handle_octal - handle cases of integer in base 8
 *
 * @n: parameter representing arguments
 *
 * Return: 0
 */
unsigned int handle_octal(unsigned int n)
{
	if (n == 0)
		return (0);

	if (n < 8)
		_putchar(n + '0');

	handle_octal(n / 8);
	_putchar(n % 8 + '0');
	return (0);
}

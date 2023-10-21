#include "main.h"

/**
 * handle_octal - hanle numbers of base 8
 *
 * @n: parameter passed as base 8
 *
 * Return: number in octal
 */
int handle_octal(unsigned int n)
{
	if (n <= 0)
		return (0);

	handle_octal(n / 8);
	_putchar(n % 8 + '0');
	return (0);
}

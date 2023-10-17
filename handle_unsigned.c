#include "main.h"

/**
 * handle_unsigned - handle unsigned int
 *
 * @n: parameter for argument passed
 *
 * Return: 0
 */
unsigned int handle_unsigned(unsigned int n)
{
	if (n <= 0)
		return (0);

	handle_unsigned(n / 10);
	_putchar(n % 10 + '0');
	return (0);
}

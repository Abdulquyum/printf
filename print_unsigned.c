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
	int i;

	if (n <= 0)
		return (0);

	i = n / 10;
	handle_unsigned(i);
	_putchar(n % 10 + '0');
	return (0);
}

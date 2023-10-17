#include "main.h"

/**
 * to_hexadec - convers decimal to hexadecimal
 *
 * @n: argument
 *
 * Return: 0
 */
unsigned int to_hexadec(unsigned int n)
{
	int r;

	if (n == 0)
		return (0);

	r = n % 16;
	to_hexadec(n / 16);
	if (r < 10)
		_putchar(r);
	else
		_putchar('A' + r - 10);

	return (0);
}

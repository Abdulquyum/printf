#include "main.h"

/**
 * handle_unsignd - handle unsigned int
 *
 * @n: parameter for argument passed
 *
 * Return: 0
 */
int handle_unsignd(unsigned int n)
{
	if (n <= 0)
		return (0);

	handle_unsignd(n / 10);

	_putchar(n % 10 + '0');

	return (0);
}

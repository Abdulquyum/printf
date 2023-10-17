#include "main.h"

/**
 * convert_to_bin - convert number to binary (base 2)
 *
 * @n: argument to be taken
 *
 * Return: 0
 */
int convert_to_bin(int n)
{
	if (n <= 0)
		return (0);

	convert_to_bin(n / 2);
	_putchar(n % 2 + '0');
	return (0);
}

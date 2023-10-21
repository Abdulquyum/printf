#include "main.h"

/**
 * convert_to_bin - convert number to binary (base 2)
 *
 * @n: argument to be taken
 *
 * Return: number of argument printed
 */
int convert_to_bin(int n)
{
	int _return = 0;

	if (n <= 0)
		return (0);

	convert_to_bin(n / 2);
	_return += _putchar(n % 2 + '0');

	return (_return);
}

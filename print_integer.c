#include "main.h"

/**
 * print_int - prints integers
 *
 * @n: number passed as argument
 *
 * Return: count of arguments
 */
int print_int(unsigned int n)
{
	int _return = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_int(n / 10);
		_putchar(n % 10 + '0');
		_return += 1;

		return (_return);
	}


	else if (n == 0)
		return (0);


	else
	{
		print_int(n / 10);
		_putchar(n % 10 + '0');
		_return += 1;

		return (_return);
	}
}

#include "main.h"

/**
 * print_int - prints integers
 *
 * @n: number passed as argument
 *
 * Return: nothing
 */
int print_int(va_list printable)
{
	int n = va_arg(printable, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_int(printable);
		_putchar(n % 10 + '0');
	}

	else if (n == 0)
	return 0;

	else
	{
		print_int(printable);
		_putchar(n % 10 + '0');
	}

	return (0);
}

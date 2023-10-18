#include <stdio.h>
#include "main.h"

/**
 * print_bin - prints in binary
 *
 * @printable: prints integer
 *
 * Return: 0
 */
int convert_to_bin(va_list printable)
{
	int n = va_arg(printable, int);

	if (n == 0)
	{
		return 0;
	}

	convert_to_bin(printable);
	_putchar(n % 2 + '0');
	return(0);
}

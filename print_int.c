#include "main.h"

/**
 * print_int - prints integers
 *
 * @n: number passed as argument
 *
 * Return: nothing
 */
void print_int(int n)
{
	if (n < 0)
		return;

	else if (n == 0)
		return;

	else
	{
		print_int(n / 10);
		_putchar(n % 10 + '0');
	}
}

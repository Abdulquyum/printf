#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a single character
 *
 * @c: chararcter to be printed to stdout
 *
 * Return: Nothing
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

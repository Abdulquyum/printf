#include "main.h"

/**
 * print_string - prints string
 *
 * @str: parameter for array of string
 *
 * Return: strings
 */
int print_string(char *str)
{
	int q;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		string = str[q];
		_putchar(string);

	}
	return (0);
}

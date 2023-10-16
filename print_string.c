#include "main.h"

/**
 * print_string - prints string
 *
 * @str: parameter for array of string
 *
 * Return: strings
 */
void print_string(char *str)
{
	int q, _return = 0;
	char string;

	for (q = 0; str[q] != '\0'; q++)
	{
		string = str[q];
		_putchar(string);

		_return += 1;
	}
}

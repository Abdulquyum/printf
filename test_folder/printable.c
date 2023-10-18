#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - prints like original printf function
 *
 * @format: compulsory argument
 *
 * Return:Number of character printed excluding null byte
 */
int _printable(const char *format, va_list printable)
{
	int iterate, _return = 0;

	printer all[] = {
		{"c", _putchar}, {"s", print_string},
		{"%", _putchar}, {"d", print_int}, {"i", print_int},
		{"b", print_bin},
	if (format == NULL)
		return (-1);

	for (iterate = 0; format[iterate] != '\0'; iterate++)
	{
		if (format[iterate] != '%')
		{
			_putchar(format[iterate]);
			_return += 1;

		}

		else if (format[iterate] == '%')
		{	
			if (format[iterate + 1] == 'c')
			{
				_putchar(va_arg(printable, int));
				_return += 1;

			}
			else if (format[iterate + 1] == 's')
			{
				print_string(va_arg(printable, char *));
				_return += 1;

			}
			else if (format[iterate + 1] == '%')
			{
				_putchar('%');
				_return += 1;
			}
			else if (format[iterate + 1] == 'd' || format[iterate + 1] == 'i')
			{
				print_int(va_arg(printable, int));
				_return++;
			}
			else if (format[iterate + 1] == 'b')
			{
				print_bin(va_arg(printable, int));
				_return += 1;
			}

			iterate++;
		}
	}
	va_end(printable);

	return (_return);
}

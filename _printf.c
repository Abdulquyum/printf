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
int _printf(const char *format, ...)
{
	int iterate, _return = 0, c;
	char a, b;

	va_list printable;

	va_start(printable, format);

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
				a = va_arg(printable, int);
				_putchar(a);
				_return += 1;

			}
			else if (format[iterate + 1] == 's')
			{
				print_string(va_arg(printable, char *));
				_return += 1;

			}
			else if (format[iterate + 1] == '%')
			{
				b = '%';
				_putchar(b);
				_return += 1;
			}
			else if (format[iterate + 1] == 'd' || format[iterate + 1] == 'i')
			{
				c = va_arg(printable, int);
				print_int(c);
				_return += 1;
			}

			iterate++;
		}
	}
	va_end(printable);

	return (_return);
}

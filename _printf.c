#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints like original printf function
 *
 * @format: compulsory argument
 *
 * Return:Number of character printed excluding null byte
 */
int _printf(const char *format, ...)
{
	int iterate, _return = 0;
	char a, b;

	va_list printable;

	va_start(printable, format);

	for (iterate = 0; format[iterate] != '\0'; iterate++)
	{
		if (format[iterate] != '%')
		{
			_return += _putchar(format[iterate]);

		}

		else if (format[iterate] == '%')
		{	
			if (format[iterate + 1] == 'c')
			{
				a = va_arg(printable, int);
				_putchar(a);

			}
			else if (format[iterate + 1] == 's')
			{
				print_string(va_arg(printable, char *));

			}
			else if (format[iterate + 1] == '%')
			{
				b = '%';
				_putchar(b);
			}
			else if (format[iterate + 1] == 'd' || format[iterate + 1] == 'i')
			{
				print_int(va_arg(printable, int));
			}

			iterate++;
		}
		_return++;
	}

	return (_return);
}

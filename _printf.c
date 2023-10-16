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

	if (format == '\0')
		putchar('\n');

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
			}

			iterate++;
			_return += 1;
		}
	}

	return (_return);
}

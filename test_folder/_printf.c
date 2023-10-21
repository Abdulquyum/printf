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
	int iterate, _return = 0, q;

	va_list printable;

	printer all[] = {
		{"s", print_string},
	       	{"c", _print_char},
	       	{"d", print_int},
		{"i", print_int},
	       	{"b", convert_to_bin},
		{"u", handle_unsigned},
	       	{"o", handle_octal},
	       	{"x", to_hexadec_low},
		{"X", to_hexadec_high},
		{NULL, NULL}
	};

	va_start(printable, format);

	for (iterate = 0; format[iterate] != '\0'; iterate++)
	{
		if (format[iterate] != '%')
		{
			_return += _putchar(format[iterate]);
		}

		else if (format[iterate] == '%')	
		{
			for (q = 0; all[q].checks != NULL; q++)
			{
				if (format[iterate + 1] == all[q].checks[0])
				{
					_return += all[q].ptr(printable);
					iterate++;
					break;
				}
			}
			if (format[iterate + 1] != ' ' && all[q].checks == NULL)
			{
				if (format[iterate + 1])
				{       _return += _putchar(format[iterate]);
					_return += _putchar(format[iterate + 1]);
				}
			}
			iterate++;

		}
	}

	va_end(printable);

	return (_return);
}

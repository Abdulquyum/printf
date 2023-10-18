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
	int iterate, _return = 0, buff_ind = 0, q;
	char buffer[BUFFSIZE];

	printer all[] = {
		{"c", _print_char},
	       	{"s", print_string},
	       	{"d", print_int},
		{"i", print_int},
	       	{"b", convert_to_bin},
		{"u", handle_unsigned},
	       	{"o", handle_octal},
	       	{"x", to_hexadec_low},
		{"X", to_hexadec_high},
		{NULL, NULL}
	};

	for (iterate = 0; format[iterate] != '\0'; iterate++)
	{
		if (format[iterate] != '%')
		{
			buffer[buff_ind] = _putchar(format[iterate]);
			if (buff_ind == BUFFSIZE)
				write(1, buffer, buff_ind);
			_return += 1;

		}

		else if (format[iterate] == '%')
		{
			if (format[iterate + 1] == '%')
			{
				buffer[buff_ind] = _putchar('%');
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;
			}
			for (q = 0; q < 10; q++)
			{
				if (format[iterate + 1] == all[q].checks[0])
					break;
			}

			if (q < 10)
			{
				buffer[buff_ind] = all[q].ptr(printable);
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return++;
			}
			else
			{
				buffer[buff_ind] = _putchar(format[iterate]);
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return++;
			}
			iterate++;
		}
	}

	if (buffer[buff_ind] > 0)
	{
		write(1, format, buff_ind);
	}

	va_end(printable);

	return (_return);
}

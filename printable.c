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
	int iterate, _return = 0, buff_ind = 0;
	char buffer[BUFFSIZE];

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
			if (format[iterate + 1] == 'c')
			{
				buffer[buff_ind] = _putchar(va_arg(printable, int));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;

			}
			else if (format[iterate + 1] == 's')
			{
				buffer[buff_ind] = print_string(va_arg(printable, char *));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;

			}
			else if (format[iterate + 1] == '%')
			{
				buffer[buff_ind] = _putchar('%');
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;
			}
			if (format[iterate + 1] == 'd' || format[iterate + 1] == 'i')
			{
				buffer[buff_ind] = print_int(va_arg(printable, int));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);	
				_return++;
			}
			else if (format[iterate + 1] == 'b')
			{
				buffer[buff_ind] = convert_to_bin(va_arg(printable, int));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;
			}
			else if (format[iterate + 1] == 'u')
			{
				buffer[buff_ind] = handle_unsigned(va_arg(printable, int));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return++;
			}
			else if (format[iterate + 1] == 'o')
			{
				buffer[buff_ind] = handle_octal(va_arg(printable, int));
				if (buff_ind == BUFFSIZE)
					write(1, buffer, buff_ind);
				_return += 1;
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

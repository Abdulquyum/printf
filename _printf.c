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
	int _return = 0;

	va_list printable;

	va_start(printable, format);

	if (*format == '\0' || *(format + 1) == '\0')
		return (-1);

	 _return += _printable(format, printable);

	 va_end(printable);

	return (_return);
}

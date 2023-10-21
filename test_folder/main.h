#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFFSIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list printable);
int print_string(va_list printable);
int print_int(va_list printable);
int _printable(const char *format, va_list printable);
int convert_to_bin(va_list printable);
int handle_unsigned(va_list printable);
int handle_octal(va_list printable);
int to_hexadec_high(va_list printable);
int to_hexadec_low(va_list printable);

typedef struct format {
	char *checks;
	int (*ptr)(va_list);
	} printer;
#endif

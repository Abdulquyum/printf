#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_string(char *str);
void print_int(int n);
int _printable(const char *format, va_list printable);
int print_bin(int n);

typedef struct format {
	char *check;
	int (*ptr) (va_list);
	} printer;

#endif

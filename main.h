#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
void print_string(char *str);
int print_int(int n);
int _printable(const char *format, va_list printable);
int _printable(const char *format, va_list printable_int);
int convert_to_bin(int n);
unsigned int handle_unsigned(unsigned int n);
unsigned int handle_octal(unsigned int n);

#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFFSIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_int(int n);
int _printable(const char *format, va_list printable);
int convert_to_bin(int n);

#endif

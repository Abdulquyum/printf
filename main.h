#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFFSIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_int(int n);
int convert_to_bin(unsigned int n);
int handle_octal(unsigned int n);
int to_hexadec_low(unsigned int n);
int to_hexadec_high(unsigned int n);
int handle_unsigned(unsigned int n);
#endif

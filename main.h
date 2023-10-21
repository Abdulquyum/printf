#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFFSIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
unsigned int print_int(unsigned int n);
unsigned int convert_to_bin(unsigned int n);
unsigned int handle_unsigned(unsigned int n)
unsigned int to_hexadec_high(unsigned int n);
unsigned int to_hexadec_low(unsigned int n);
unsigned int to_hexadec_high(unsigned int n);
#endif

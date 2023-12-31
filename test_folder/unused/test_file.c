#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	char a = 'I';
	int r_value, r_value2;
	char *c = "years old";
	int len, len2;
	unsigned int ui;

	r_value = printf("%c am 5 %s\n", a, c);
	r_value2 = _printf("%c am 5 %s\n", a, c);
	r_value += len = printf("Let's try to printf a simple sentence.\n");
	r_value2 += len2 = _printf("Let's try to printf a simple sentence.\n");
	r_value += printf("Length:[%d, %i]\n", len, len);
	r_value2 += _printf("Length:[%d, %i]\n", len2, len2);
	r_value += printf("Negative:[%d]\n", -762534);
	r_value2 += _printf("Negative:[%d]\n", -762534);
	r_value += printf("Character:[%c]\n", 'H');
	r_value2 += _printf("Character:[%c]\n", 'H');
	r_value += printf("String:[%s]\n", "I am a string !");
	r_value2 += _printf("String:[%s]\n", "I am a string !");
	r_value += len = printf("Percent:[%%]\n");
	r_value2 += len2 = _printf("Percent:[%%]\n");
	r_value += printf("my Len:[%d]\n", len);
	r_value2 += _printf("Len:[%d]\n", len2);
	r_value += printf("%b\n", 98);
	r_value += _printf("%b\n", 98);
	ui = (unsigned int)INT_MAX + 1024;
	r_value += printf("Unsigned:[%u]\n", ui);
	r_value2 += _printf("Unsigned:[%u]\n", ui);
	r_value += printf("Unsigned octal:[%o]\n", ui);
	r_value2 += _printf("Unsigned octal:[%o]\n", ui);
	r_value += printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	r_value += _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	printf("return value == %d\n", r_value);
	_printf("my return value == %d\n", r_value2);

	return (0);
}

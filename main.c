#include <stdio.h>
#include "main.h"

int main(void)
{
	char a = 'I';
	char *s = "Ajumobi-Abdulquyum";
	int _return, _return2;

	_return = printf("my name is Abdulquyum\n");
	_return2 =_printf("My name is Abdulquyum\n");
	_return += printf("%c am Abdulquyum 100%%\n", a);
	_return2 += _printf("%c am Abdulquyum 100%%\n", a);
	_return += printf("100%%\n");
	_return2 += _printf("100%%\n");
	_return += printf("My full name %c%c %s\n", 'i', 's', s);
	_return2 += _printf("My full name %c%c %s\n", 'i', 's', s);

	printf("_return is %d\n", _return);
	printf("_return2 is %d\n", _return2);

	return (0);
}

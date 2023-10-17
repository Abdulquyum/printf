#include <stdio.h>

unsigned int handle_hex(unsigned int n);
int main(void)
{
	handle_hex(5);

	return (0);
}
unsigned int handle_hex(unsigned int n)
{
	if (n < 16)
	{
		handle_hex(n / 10);
		putchar(n % 10 + '0');
	}
	else
		for (n = 'a'; n <= 'f'; n++)
			putchar(n);
	return (0);
}


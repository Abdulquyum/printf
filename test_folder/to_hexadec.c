#include <stdio.h>

unsigned int to_hexadec(unsigned int n);

int main(void)
{
	to_hexadec(255);
	putchar('\n');
	return (0);
}
unsigned int to_hexadec(unsigned int n)
{
	int r;

	if (n == 0)
		return (0);

	r = n % 16;
	to_hexadec(n / 16);
	if (r < 10)
		putchar(r);
	else
		putchar('A' + r - 10);
}

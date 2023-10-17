#include <stdio.h>

int print_bin(int n);

int main(void)
{
	print_bin(98);
	putchar('\n');
	return (0);
}
int print_bin(int n)
{
	int q;

	if (n == 0)
	{
		return 0;
	}

	print_bin(n / 2);
	putchar(n % 2 + '0');
	return(0);
}

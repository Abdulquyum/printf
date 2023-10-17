#include <stdio.h>
#include "main.h"

int print_bin(int n)
{
	if (n == 0)
	{
		return 0;
	}

	print_bin(n / 2);
	putchar(n % 2 + '0');
	return(0);
}

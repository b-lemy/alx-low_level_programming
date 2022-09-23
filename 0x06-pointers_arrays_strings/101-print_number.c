#include "main.h"

/**
*print_number - prints a number
*@n: the number
**/

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}

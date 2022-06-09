#include <limits.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(0);
	r = print_last_digit(INT_MIN);
	_putchar('0' + r)
	return (0);
}

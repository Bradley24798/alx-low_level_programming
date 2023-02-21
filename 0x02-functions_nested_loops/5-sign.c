#include "main.h"
/**
 *print_sign - Prints sign of a number
 *@n: number where sign will be printed
 *Return: 0 if number is zero, 1 if greater than 0 otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

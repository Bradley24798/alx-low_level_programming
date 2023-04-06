#include "main.h"
#include <unistd.h>
/**
 * print_binary - prints the binary re of no.
 * @n: Number to print.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}

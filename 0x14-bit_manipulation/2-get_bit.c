#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number to derive the bit from
 * @index: the index of the bit alluded to.
 *
 * Return: value of the bit at index index or -1 in case
 * of ann error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	b = 1;
	b <<= index;
	return ((n & b) != 0);
}

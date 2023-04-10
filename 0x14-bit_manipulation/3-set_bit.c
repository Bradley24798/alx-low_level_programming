/**
 * set_bit - sets th value of  bit to 1 at a given index.
 * @n: pointer to the number.
 * @index: index of the bit to set'
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1ul << index);

	return (1);
}

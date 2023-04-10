/**
 * get_endianness - checks the endianness of the system.
 * Return: 0 if big endian and 1 if little.
 */
int get_endianness(void)
{
	int num = 1;
	char *pts = (char *)&num;

	if (*pts == 1)
		return (1);
	else
		return (0);
}

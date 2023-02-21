#include <stdio.h>
/**
 * print_alphabet - prints out the alphabet
 *
 * Return: Always 0 (Program is successful)
 */
void print_alphabet(void)
{
char lower_case;
for(lower_case = 'a','a'<='z',lower_case++)
_putchar(lower_case);
_putchar('\n');
}

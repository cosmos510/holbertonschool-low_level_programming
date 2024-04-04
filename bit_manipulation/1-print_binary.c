#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to transform to binary
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;
	int num_bits = sizeof(unsigned long int) * 8;
	int significant_bits_found = 0;

	for (i = num_bits - 1; i >= 0; i--)
	{
		mask = 1 << i;
		if (n & mask)
		{
			_putchar(0 + '1');
			significant_bits_found = 1;
		}
		else
		{
			if (significant_bits_found)
				_putchar(0 + '0');
		}
	}
	if (!significant_bits_found)
		_putchar(0 + '0');
}

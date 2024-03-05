#include "main.h"
/**
 * check_prime - Find out if n is prime number
 * @num: The number to be tested
 * @prime: checker to prime number
 *
 * Return: 1 if n is prime number
 *         else  0.
 */

int check_prime(int num, int prime)
{
	if (num % prime == 0)
	{
		if (num == prime)
			return (1);
		else
			return (0);
	}
	return (check_prime(num, prime + 1));
}

/**
 * is_prime_number - Check if the input integer is a prime number
 * @n: The number to check if prime number
 * Return: 1 if n is prime number
 *         else  0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_prime(n, 2));
}

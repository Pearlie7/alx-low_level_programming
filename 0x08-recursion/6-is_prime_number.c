#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
  *is_prime_number - return if a number is a prime
  *@n: input value
  *Return: int value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  *check_prime - check if number is prime
  *@n: input value
  *@i: iteration times
  *Return: 1
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		return (1);
	return (check_prime(n, i + 1));
}

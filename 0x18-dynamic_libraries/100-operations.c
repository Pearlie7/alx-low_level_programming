int mul(int a, int b);
int add(int a, int b);
int sub(int a, int b);
int mol(int a, int b);
int divide(int a, int b);

/**
 * add - adds two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts a number from another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * divide - divides one number by another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int divide(int a, int b)
{
	return (a / b);
}

/**
 * mol - returns the remainder when a number is divided by another.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Integer result of operation.
 */

int mol(int a, int b)
{
	return (a % b);
}

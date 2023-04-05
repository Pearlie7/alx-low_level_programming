#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to return
* Return: return 1 on success
*on erroe, -1 is returned, and error is set appropri    atel    y
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

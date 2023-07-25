#include "main.h"

/* ihssaneer & JalalErr */
/**
 * _printchar - print the arguments of type char.
 * @args: the argument of char type.
 * Return: 1 in success and -1 in failure.
 */

int _printchar(va_list args)
{
	/*variables declaration section :*/
	char c = va_arg(args, int);

	/*The code section :*/
	_putchar(c);

	/*The return value section :*/
	return (1);
}


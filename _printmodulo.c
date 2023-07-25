#include "main.h"

/* ihssaneer & JalalErr */
/**
 * _printmodulo - print %.
 * @args: the argument te print.
 * Return: 1 in success and -1 in failure.
 */

int _printmodulo(va_list args)
{
	/*variables declaration section :*/
	/*The code section :*/
	(void) args;
	_putchar('%');

	/*The return value section :*/
	return (1);
}
/**
 * _printK - print %K.
 * @args: the argument te print.
 * Return: 1 in success and -1 in failure.
 */
int _printK(va_list args)
{
	/*variables declaration section :*/
	/*The code section :*/
	(void) args;
	_putchar('%');
	_putchar('K');

	/*The return value section :*/
	return (2);
}
/**
 * _print_ - print %!.
 * @args: the argument te print.
 * Return: 1 in success and -1 in failure.
 */

int _print_(va_list args)
{
	/*variables declaration section :*/
	/*The code section :*/
	(void) args;
	_putchar('%');
	_putchar('!');

	/*The return value section :*/
	return (2);
}

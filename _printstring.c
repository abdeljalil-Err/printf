#include "main.h"

/* ihssaneer & JalalErr */
/**
 * _printstring - print the arguments of type string.
 * @args: the argument of string type.
 * Return: the length of the string on  success.
 */

int _printstring(va_list args)
{
	/*variables declaration section :*/
	char *string_temp;
	int i;

	/*The code section :*/
	string_temp = va_arg(args, char *);
	while (string_temp[i])
	{
	_putchar(string_temp[i]);
	i++;
	}
	/*The return value section :*/
	return (i);
}


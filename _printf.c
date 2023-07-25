#include "main.h"

/* ihssaneer & JalalErr */
/**
* _printf - sends formatted output to stdout.
* @format: the string that contains the text to be written to stdout.
* Return: If successful, the total number of characters written is returned.
*	On failure, a negative number is returned.
*/
int _printf(const char *format, ...)
{
	/* The variables declaration section :*/
	int printed_char_lent = 0, i = 0, j;
	va_list args;
	specifier_t specifier[] = {
	{'c', _printchar},
	{'s', _printstring},
	{'%', _printmodulo},
	{'K', _printK},
	{'!', _print_},
	{'i', _printint},
	{'d', _printint}
	};

	/*The code section :*/
	va_start(args, format);
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
	return (-1);
	for (; format && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case '%':
			i++;
			j = 0;
			while (j < 7)
			{
				if (format[i] == specifier[j].sp_char)
				printed_char_lent += specifier[j].sp_print_fun(args);
			j++;
			}
			break;
			default:
			printed_char_lent += _putchar(format[i]);
			break;
		}
	}
	va_end(args);
	/*The return value section :*/
	return (printed_char_lent);
}


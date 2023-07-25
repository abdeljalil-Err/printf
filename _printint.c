#include "main.h"

/* ihssaneer & JalalErr */
/**
 * _printint - prints an integer or a digit.
 * @n: the integer to print.
 * Return: the length of the args.
 */
int _printint(va_list args)
{
	int i = 1, j, count = 0;
	int N = va_arg(args, int), P, n = N, len_int = 0;

	if (n == -2147483648)
    {
	    _putchar(45);
	    _putchar(50);
	    len_int += 2;
	    N = 147483648;
    }
	if (n < 0 && n > -2147483648)
    {
	    _putchar(45);
	    len_int++;
	    N = n * -1;
    }
	P = N;
	while (N >= 10)
	{
		N = N / 10;
		i *= 10;
		count++;
	}
	for (j = 0; j <= count; j++)
	{
		N = P / i;
		i /= 10;
		_putchar((N % 10) + '0');
		len_int++;
	}
	return (len_int);
}

/**
 * _print_num - Print a decimal integer.
 * @n: The integer to print.
 *
 * Return: The number of characters printed.
 */
#include <stdio.h>
#include "main.h"

int _print_num(int n)
{
        int numPrintedChars = 0;

        if (n < 0)
        {
                /* Handle negative numbers */
                
                n = -n;
                numPrintedChars++;
        }

        if (n / 10)
        {
                numPrintedChars += _print_num(n / 10);
        }

        _putchar((n % 10) + '0');
        numPrintedChars++;

        return (numPrintedChars);
}
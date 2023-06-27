/**
 * _print_str - Print a string.
 * @s: The string to print.
 * Return: The number of characters printed.
 */
#include <stdio.h>
int _print_str(char *s)
{
    int numPrintedChars = 0;

    while (*s != '\0') {
        _putchar(*s);
        s++;
        numPrintedChars++;
    }

    return numPrintedChars;
}
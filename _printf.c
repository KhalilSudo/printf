#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int numberPrintedChars = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == '\0')
            {
                _putchar('%');
                numberPrintedChars++;
                break;
            }
            if (*format == '%')
            {
                _putchar('%');
                numberPrintedChars++;
                format++; 
                continue; 
            }
            switch (*format)
            {
                case 'd':
                case 'i':
                {
                    int val = va_arg(args, int);
                    numberPrintedChars += _print_num(val);
                    break;
                }
                case 'c':
                {
                    int val = va_arg(args, int);
                    _putchar(val);
                    numberPrintedChars++;
                    break;
                }
                case 's':
                {
                    char *val = va_arg(args, char*);
                    numberPrintedChars += _print_str(val == NULL ? "(null)" : val);
                    break;
                }
                case '%':
                {
                    _putchar('%');
                    numberPrintedChars++;
                    break;
                }
                default:
                {
                   _putchar('%');
                    _putchar(*format);
                    numberPrintedChars += 2; 
                }
            }
        }
        else
        {
            _putchar(*format);
            numberPrintedChars++;
        }
        format++;
    }

    va_end(args);

    return numberPrintedChars;
}

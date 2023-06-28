#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _print_num(int n);
int _print_str(char *s);
int _putchar(char c);


#endif /* MAIN_H */
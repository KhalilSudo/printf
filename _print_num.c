/**
 * _print_num - Prints an integer to the console
 * @n: The integer to print
 * Return: The number of characters printed
 */
int _print_num(int n)
{
    int i = 0;
    int sign = 1;
    char buffer[10];

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    if (n < 0)
    {
        sign = -1;
        n = -n;
    }

    while (n > 0)
    {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    }

    if (sign == -1)
    {
        buffer[i++] = '-';
    }

    for (int j = i - 1; j >= 0; j--)
    {
        _putchar(buffer[j]);
    }

    return i;
}
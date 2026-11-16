#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    int i;
    int num;

    va_start(args, format);
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%' && format[i + 1] == 'd')
        {
            num = va_arg(args, int);
            printf("%d", num);
            i += 2;
        }
        else
        {
            putchar(format[i]);
            i++;
        }
    }
    va_end(args);
    return (0);
}

int main()
{
    ft_printf("hi %d %%!!", 42);
}

#include <stdio.h>
#include <stdarg.h>

void ft_printf(const char *format, ...)
{
    va_list args;
    const char *str;
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
        else if (format[i] == '%' && format[i + 1] == 's')
        {
            str = va_arg(args, char *);
            printf("%s", str);
            i += 2;
        }
        else
        {
            putchar(format[i]);
            i++;
        }
    }
    va_end(args);
}

int main()
{
    ft_printf("hi %d %s!", 42, "Abu Dhabi");
}

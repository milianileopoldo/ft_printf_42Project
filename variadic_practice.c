#include <stdio.h>
#include <stdarg.h>

void print_numbers(unsigned int count, ...)
{
    va_list args;
    int i;

    va_start(args, count);
    // prepares to read the 1st extra argument
    while (i < count)
    {
        printf("%d\n", va_arg(args, unsigned int));
        // va_args reads the next one as int
        i++;
    }
    va_end(args);
    // finish reading the arguments
}

int main(void)
{
    print_numbers(3, 10, 20, 30);
    return (0);
}

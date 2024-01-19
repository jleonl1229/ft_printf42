#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(char const *format, ...) {
    va_list args;
    int total;
    int i;

    total = 0;
    i = 0;
    va_start(args, format);
    while (format[i] != '\0')
    {
        total += va_arg(args, int);

        write(1, &format[i], 1);
        i++;
    }
    write(1, format, 1);
    va_end(args);
    return (0);
}

int main() {
    ft_printf("cdf");
    // printf("c");
    return (0);
}
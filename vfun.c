#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(int num_args, ...) {
    va_list args;
    int total;
    int i;

    total = 0;
    i = 0;
    va_start(args, num_args);
    while (i < num_args)
    {
        //total += va_arg(args, int);

        write(1, va_arg(args, int), 1);
        i++;
    }
    va_end(args);
}

int main() {
    ft_printf('c');
    return 0;
}
#include <stdio.h>
#include <unistd.h>

int ft_tobnary(int num, char *base)
{
    char    c;
    int     i;

    i = 0;
    if (num > 0)
        i += ft_tobnary(num / 2, base);
    return (write(1, base[num % 2], 1) + i);
}

int ft_tohex(int num, char *base)
{
    if (num > 0)
        ft_tohex(num / 10, base);
    return (write(1, &base[num % 10], 1));
}

int main(void)
{
    int num;

    num = 5;
    ft_tohex(14, "123456789abcdef");
    return 0;
}

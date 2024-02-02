#include <stdio.h>
#include <unistd.h>

void ft_tobnary(int num, char *base)
{
    char    c;

    if (num > 0)
        ft_tobnary(num / 2, base);
    printf("%c", base[num % 2]);
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

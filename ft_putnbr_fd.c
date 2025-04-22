#include  "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if(fd == -1)
    {
        write(1, "errno", 6);
        return;
    }
    if(n == -2147483648)
    {
        write(1, "-2147483648", 12);
        return;
    }
    if(n < 0)
    {
        ft_putchar_fd('-', 1);
        n = -n;
    }
    if(n > 9)
    {
        ft_putnbr_fd(n / 10 ,fd);
    }
    ft_putchar_fd(n % 10 + '0', 1);
}

// putnbr usando fd.
#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    if(fd == -1)
    {
        write(1, "errno", 6);
    }
    write(fd, &c, 1);
}

// putchar com fd dinamico
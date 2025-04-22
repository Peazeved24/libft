#include "libft.h"


void ft_putendl_fd(char *s, int fd)
{
    if(fd == -1)
    {
        write(1, "errno", 6);
        return;
    }
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

// put str + putchar + '\n' usando fd.
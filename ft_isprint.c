#include <stdio.h>

int ft_isprint(int c)
{
    if(!(c >= 32 && c <= 126))
    {
        return 0;
    }
    return 1;
}
//retorna 1 se for printable.
#include <stdio.h>

int ft_isdigit(int c)
{
    if(!(c >= 48 &&  c <= 57))
    {
        return 0;
    }
    return 1;
}

// retorna 1 se for digito (1 a 9)
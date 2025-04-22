#include "libft.h"

int    ft_isalpha(int c)
{
    if(!(c >= 95 && c <= 122) || (c >=  65 && c <=  90))
    {
        return 0;
    }

    return 1;
}

// funcao que retorna 1 caso for alpha ...
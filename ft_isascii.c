#include <stdio.h>

int ft_isascii(int c)
{
    if(!(c >= 0 && c <= 127))
    {
        return 0;
    }

    return 1;
}

// funcao que retorna 1 caso for um char que esta na tabela ASCII

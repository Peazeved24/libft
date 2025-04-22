#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;

    ptr = (unsigned char *)b;
    
    size_t i = 0;

    while(i < len)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }

    return b;
}
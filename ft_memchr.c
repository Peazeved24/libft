#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    const unsigned char uc = (const unsigned char) c;
    size_t i = 0;

    while(i < n)
    {
        if(ptr[i] == uc)
        {
            return(void*)(ptr + i);
        }
        i++;
    }

    return NULL;
}
// retorna a ocorrencia 
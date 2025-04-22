#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t total = count * size;
    void *tmp;

    tmp = malloc(total);
    if(tmp == NULL)
        return NULL;
    ft_memset(tmp, 0, total);
    return tmp;
}
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dstL = ft_strlen(dst);
    size_t srcL = ft_strlen(src);
    size_t i = 0;

    if(dstL == dstsize)
    {
        return dstL + srcL; 
    }

    while(src[i] && dstL +  i < dstsize - 1)
    {
        dst[dstL + i] = src[i];
        i++;
    }
    dst[dstL + i] = '\0';

    return  dstL + srcL;
}
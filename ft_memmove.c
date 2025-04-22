#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char* pd = (unsigned char*) dst;
    const unsigned char* ps = (const unsigned char*) src;

    size_t i = 0;

    if(pd < ps)
    {
        while(i < len)
        {
            pd[i] = ps[i];
            i++;
        }
    }
    else if(pd > ps)
    {
        i = len;
        while(i > 0)
        {
            pd[i-1] = ps[i-1];
            i--;
        }
    }

    return dst;
}
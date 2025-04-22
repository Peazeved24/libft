#include <stdio.h>

void *memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *pd = (unsigned char *)dst;
    const unsigned char *ps = (const unsigned char *)src;

    size_t i = 0;

    while(ps[i] && i < n)
    {
        pd[i] = ps[i];
        i++;
    }

    return dst;
}
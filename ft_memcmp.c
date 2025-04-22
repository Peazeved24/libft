#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (unsigned char *)s1;
    const unsigned char *p2 = (unsigned char *)s2;

    size_t i = 0;

    while(p1[i] && p2[i] && i < n)
    {
        if(p1[i] - p2[i])
        {
            return p1[i] - p2[i];
        }
        i++;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int len = 0;
    const char *last = NULL; // aponta para uma memoria indefinida

    while(s[len])
    {
        if(s[len] == (char)c)
        {
            last = &s[len];
        }
        len++;
    }

    if((char)c == '\0')
    {
        return (char*)&s[len];
    }

    return (char*)last;
}
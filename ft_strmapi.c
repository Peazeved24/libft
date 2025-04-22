#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    int i = 0;
    int len = ft_strlen(s);
    char *str;

    if(!(str = (char *)malloc((len + 1) * sizeof(char))))
    return NULL;

    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';

    return str;
}
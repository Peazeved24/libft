#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t i = 0;
    size_t totalL = ft_strlen(s1); + ft_strlen(s2);

    char *str = (char*)malloc((totalL + 1) * sizeof(char));

    if(str == NULL)
    {
        return NULL;
    }
    while(*s1) // primeiro pegar o meu "valor" de s1
    {
        str[i] = *s1;
        s1++;
        i++;
    }
    while(*s2) //depois o meu "valor" de s2
    {
        str[i] = *s2;
        s2++;
        i++;
    }
    str[i] = '\0';
    return str;
}
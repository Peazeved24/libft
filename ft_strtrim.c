#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int ft_isSet(char c, const char *set)
{
    while(*set)
    {
        if(c == *set)
        {
            return 1;
        }
        set++;
    }
    return 0;
}

char *ft_strtrim(const char *s1, const char *set)
{
    int i;
    int len;
    int end;
    int s;
    int total;
    char *str;

    i = 0;
    len = ft_strlen(s1);
    end = len;
    s = 0;
    while(s < end && ft_isSet(s1[s], set)) // trim nos caractres iniciais 
        s++;
    while(end > s && ft_isSet(s1[end - 1], set)) // trim nos caractres finais
        end--;
    total = end - s;
    if (!(str = (char*)malloc((total + 1) * sizeof(char)))) return NULL;
    while(i < total)
    {
        str[i] = s1[s + i];
        i++;
    }
    str[i] = '\0';
    return str;
}
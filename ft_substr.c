#include <stdio.h>
#include <stdlib.h>

size_t    ft_strlen(const char *s)
{
    int i = 0;
    
    while(s[i])
    {
        i++;
    }
    return i;
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t slen = ft_strlen(s); // tamanho total da string
    size_t i = 0; // index -=-- cont
    
    if(start >= slen) // erro - condicoes de seguranca
    {
        return NULL;
    }
    if(start + len > slen) // 
    {
        return NULL;
    }
    
    char *str = (char*)malloc((len + 1) * sizeof(char)); // malloc para a string
    if(str == NULL)
    {
        return NULL;
    }
    while(s[start] != '\0' && i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return str;
}
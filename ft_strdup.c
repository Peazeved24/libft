
#include "libft.h"

char *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *str = (char*)malloc((len + 1) * sizeof(char));

    if(str == NULL)
    {
        return NULL;
    }

    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    
    return str;
}

// duplica uma string
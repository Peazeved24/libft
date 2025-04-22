#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t needleL = ft_strlen(needle); // len do meu needle

    if(needleL == 0) // se tiver vazia == retorna me haystack.
    {
        return (char*)haystack;
    }
    
    if(needleL > len) // caso o meu len de needle for superior a minha len  de busca()
    {
        return NULL;
    }

    while(i + needleL - 1 < len)
    {
        j = 0;
        while(j < needleL)
        {
            if(haystack[i + j] != needle[j])
            {
                break;
            }
            j++; // posicao total do meu needle == needL
        }
        if(j == needleL)
        {
            return (char*)&haystack[i];
        }
        i++;
    }

    return NULL;
}

int main()
{
    char a[] = "ola mundo";
    char b[] = "m";
    printf("%s", ft_strnstr(a, b, 5));
    return 0;
}

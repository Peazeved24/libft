#include "libft.h"

int    ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int n = 0;

    while(str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            s = -1;
            i++;
        }
        else
        {
            return 0;
        }
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n *= 10;
        n = n + str[i] - '0';
        i++;
    }

    return (n * s);
}

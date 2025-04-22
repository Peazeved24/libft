#include <stdio.h>
#include <stdlib.h>

static int ft_cd(int n) // static --- uso exclusivo de uma ft auxiliar.
{
    int len = 0;

    if(n <= 0)
    {
        len = 1;
    }
    else
    {
        len = 0;
    }

    while(n != 0)
    {
        len++;
        n/=10;
    }
    return len;
}

static int ft_abs(int n)
{
    if(n < 0)
    {
        return -n;
    }
    return n;
}

char *ft_itoa(int n)
{
    int i = 0;
    int nc = ft_cd(n);
    int is_neg = (n < 0);
    char *str;

    if(!(str = (char*)malloc((nc + 1) * sizeof(char)))) return NULL;

    str[nc] = '\0';

    if(is_neg)
    {
        str[0] = '-';
    }
    if(n == 0)
    {
        str[0] = '0';
    }
    if(n > 0 || n <= 0)
    {
        i = nc - 1;
        while(i >= is_neg)
        {
            str[i] = ft_abs(n % 10) + '0';
            n/=10;
            i--;
        }
    }

    return str;
}

// itoa == int to ascii/
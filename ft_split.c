#include <stdio.h>
#include <stdlib.h>

static int ft_cW(const char *s, char c)
{
    int wc = 0;
    int flag = 0;

    while(*s)
    {
        if(*s == c) 
        {
            flag = 0;
        }
        else if(flag == 0)
        {
            flag = 1;
            wc++;
        }
        s++;
    }
    return wc;
}

static char *ft_gWord(const char *s, char c)
{
    int i = 0;
    int len = 0;
    char *word;

    while(s[len] && s[len] != c)
    {
        len++;
    }
    if(!(word = (char*)malloc((len + 1)*sizeof(char))))return NULL;

    while(i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[len] = '\0';
    return word; 
}


char **ft_split(const char *s, char c)
{
    int i = 0;
    int wc = ft_cW(s, c);
    char **words;

    if(!(words = (char**)malloc((wc + 1) * sizeof(char*)))) return NULL;

    while(*s)
    {
        if(*s != c)
        {
            words[i] = ft_gWord(s, c);
            if(words[i] == NULL)
            {
                while(i > 0)
                {
                    free(words[--i]);
                }
                free(words);
                return NULL;
            }
            i++;
            while(*s && *s != c)
            {
                s++;
            }
        }
        else
        {
            s++;
        }
    }
    words[i] = NULL;

    return words;
}

//split ate encontrar o char de seperacao 


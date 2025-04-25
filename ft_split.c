/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:59:27 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/24 17:17:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cw(const char *s, char c)
{
	int	wc;
	int	flag;

	wc = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wc++;
		}
		s++;
	}
	return (wc);
}

static char	*ft_gword(const char *s, char c)
{
	int			i;
	int			len;
	char		*word;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static int	ft_fw(char **w, const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			w[i] = ft_gword(s, c);
			if (!w[i])
			{
				while (i > 0)
					free(w[--i]);
				return (0);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		wc;

	wc = ft_cw(s, c);
	words = (char **)malloc((wc + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	if (!words)
		return (NULL);
	if (!ft_fw(words, s, c))
	{
		free (words);
		return (NULL);
	}
	words[wc] = NULL;
	return (words);
}

/*int main()
{
    char *str = "ze&da&manga";
    char **result = ft_split(str, '&');
    int i = 0;

    if(result)
    {
        while(result[i])
        {
            printf("%s- ", result[i]);
            i++;
        }
    }
    return 0;
}*/
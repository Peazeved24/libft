/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:30:18 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 14:24:08 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			len;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char ft_wtv(unsigned int i, char c)
{
    if(i % 2 == 0 && c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

int main()
{
    char a[] = "ola";
    char *result = ft_strmapi(a, ft_wtv);
    if(result)
    {
        printf("%s\n", result);
    }
    
    return 0;
}*/
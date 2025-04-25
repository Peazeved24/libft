/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:30:18 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/24 17:56:03 by peazeved         ###   ########.fr       */
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

/*char  ft_wtv(unsigned int i, char c)
{
	(void)i;
	return ft_tolower(c);
}

int main()
{
    char a[] = "OLA";
    char *result = ft_strmapi(a, ft_wtv);
    if(result)
    {
        printf("%s\n", result);
    }
    
    return 0;
}*/
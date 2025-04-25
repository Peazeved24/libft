/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:03:47 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 02:05:28 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = &s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)str);
}

/*int main()
{
    char *a = NULL;
    char z = 'a';
    char str[] = "programação";
    
    printf("Resultado 1: %s\n", strrchr(str, 'a')); 
    printf("Resultado 2: %s\n", strrchr(a, 'a')); 
    return 0;
}*/
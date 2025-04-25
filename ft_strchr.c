/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:49:19 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 02:24:40 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*int main()
{
   char *a = NULL;
    char z = 'a';
    char str[] = "programação";
 
    printf("Resultado 1: %s\n", strchr(str, 'a'));
    printf("Resultado 2: %s\n", strchr(a, 'a')); 
  
    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:59:17 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 02:23:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	cc = (const unsigned char)c;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == cc)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    char str[] = "Hello, world!";
    char ch = 'o';
    size_t len = sizeof(str);
    char *result = memchr(str, ch, len);
     
	printf("Caractere '%c' encontrado na posição: %ld\n", ch, result - str);
   
   return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:47:26 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 14:04:30 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*pd;
	const unsigned char		*ps;
	size_t					i;

	pd = (unsigned char *) dst;
	ps = (const unsigned char *)src;
	if (pd < ps)
	{
		i = 0;
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else if (pd > ps)
	{
		i = len;
		while (i > 0)
		{
			pd[i - 1] = ps[i - 1];
			i--;
		}
	}
	return (dst);
}

/*int main()
{
    char src[20] = "OLA MUNDO";
    char dst[20]; // Destino começa no meio da fonte.

    
    memmove(dst, src, 4);
    printf("%s", dst);
    

    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:54:41 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 01:29:45 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;
	size_t				i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

/*int main()
{
    char a[] = "xe de manga";
    memset(a, 'p', 1);
    printf("%s\n", a);
    return 0;
}*/

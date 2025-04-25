/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:14:16 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 13:49:43 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		total;

	if (size && count > (size_t) - 1 / size)
		return (NULL);
	total = count * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}

/*int main()
{
    char *ptr;
    int i = 0;

    ptr = (char*)calloc(5,sizeof(char));

    while(i < 5)
    {
        printf("str[%d] - %s\n",i , ptr[i++]);
    }
    return 0;
}*/
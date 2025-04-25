/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:02:47 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 02:14:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main()
{
    char a[5] = "ola";
    int i = 0;

    while(a[i])
    {
        printf("%c", ft_toupper(a[i]));
        i++;
    }
    printf("\n");
    return 0;
}*/
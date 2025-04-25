/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:13:26 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/22 02:13:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main()
{
    char a[5] = "OLA";
    int i = 0;

    while(a[i])
    {
        printf("%c", ft_tolower(a[i]));
        i++;
    }
    printf("\n");
    return 0;
}*/
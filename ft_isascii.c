/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:12:53 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 11:02:40 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

/*#include <stdio.h>
int main()
{
    char a[] = "HELLO";
    int i = 0;

    while(a[i])
    {
        printf("%i", isascii(a[i]));
        i++;
    }
    return 0;
}*/
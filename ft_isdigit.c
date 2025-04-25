/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:02:21 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 11:00:09 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
    int a = '2';
    int b = 'a';
    printf("%i\n%i\n", isdigit(a), isdigit(b));
    return 0;
}*/
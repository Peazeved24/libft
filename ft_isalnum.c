/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:07:09 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 14:01:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122)))
	{
		return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
    int a = '1';
    int b = '-';
    printf("%i\n%i\n", isalnum(a), isalnum(b));
    return 0;
}*/
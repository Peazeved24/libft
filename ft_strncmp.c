/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:56:05 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 13:51:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}

/*int main()
{
    char *a = "ola";
    char *b =  "oLa";

    printf("%i\n", ft_strncmp(a, b, 1));
    printf("%i", strncmp(a, b, 1));
    return 0;
}*/
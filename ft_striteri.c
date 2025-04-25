/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:47:51 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/25 13:20:20 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f (i, s + i);
		i++;
	}
}

/*void ft_wtv(unsigned int i, char *str)
{
	(void)i;
	*str = ft_tolower(*str);
}
int main()
{
	int i = 0;
	char str[] = "OLA";
	ft_striteri(str, ft_wtv);
	printf("%s",str);
	return 0;
}*/
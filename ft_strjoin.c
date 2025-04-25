/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:56:01 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/25 17:25:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len1;
	int		len2;
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !s2)
	return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = malloc(len1 + len2 + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

/*int main()
{
    char a[] = "ola ";
    char b[] = "mundo";
    char *ptr = ft_strjoin(a, b);
    printf("%s", ptr);
    return 0;
}*/
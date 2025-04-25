/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:55:36 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 13:50:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	if (nlen > len)
		return (NULL);
	i = 0;
	while (i + nlen <= len && haystack[i])
	{
		j = 0;
		while (j < nlen && haystack[i + j] == needle[j])
		{
			j++;
			if (haystack[i + j] != needle[j])
				break ;
		}
		if (j == nlen)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    char a[] = "ola mundo";
    char b[] = "m";
    printf("%s", strnstr(a, b, 5));
    return 0;
}*/
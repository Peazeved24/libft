/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:31:28 by peazeved          #+#    #+#             */
/*   Updated: 2025/04/23 14:07:02 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		end;
	int		s;
	char	*str;

	end = ft_strlen(s1);
	s = 0;
	while (s < end && ft_isset(s1[s], set))
		s++;
	while (end > s && ft_isset(s1[end - 1], set))
		end--;
	str = (char *)malloc((end - s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < end - s)
	{
		str[i] = s1[s + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
    char a[] = "xxxola mundoxxx";
    char b[] = "xxx";
    char *result = ft_strtrim(a, b);
        

    if(result)
    {
        printf("%s", result);
    }
    return 0;
}*/

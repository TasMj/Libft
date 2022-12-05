/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:52:06 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:42:11 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_beg(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;

	j = ft_strlen(s1);
	i = 0;
	while (i < j)
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;

	j = ft_strlen(s1);
	i = 0;
	while (i < j)
	{
		if (ft_strchr(set, s1[j - i - 1]) == 0)
			break ;
		i++;
	}
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	int		deb;
	int		fin;

	deb = ft_beg(s1, set);
	fin = ft_end(s1, set);
	if (!s1)
		return (NULL);
	if (deb >= fin)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	t = (char *)malloc(sizeof(char) * (fin - deb) + 1);
	if (t == 0)
		return (NULL);
	ft_strlcpy(t, s1 + deb, (fin + 1) - deb);
	return (t);
}

// #include <stdio.h>

// int main()
// {
// 	//printf("%s\n", ft_strtrim("000test000", "0"));
// 	printf("%s", ft_strtrim("00006XXX5X0000", "0X"));
// 	return (0);

// }
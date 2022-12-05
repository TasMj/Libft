/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:05:38 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 22:05:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i++;
	}
	if (c == '\0' && s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}
// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     //char    s[10] = "aataa";
//     char    s1[10] = "aataa";

//     printf("%s\n", ft_strchr(s, 116));

//     printf("%s\n", strchr(s1, 116));
// }
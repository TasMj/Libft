/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:09:57 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/11 12:28:44 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ss;

	i = 0;
	ss = (char *)s;
	while (i < n)
	{
		if (ss[i] == (char)c)
			return ((void *)ss + i);
		else
			i++;
	}
	return (0);
}
// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char    s[10] = "aataa";
//     //char    s1[10] = "aataa";

//     printf("%p\n", ft_memchr(s, 116, 3));

//     //printf("%p\n", memchr(s, 116, 3));
// }

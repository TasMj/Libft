/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:44:09 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/08 18:40:31 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*ss;
	size_t		i;

	i = 0;
	ss = (char *)s;
	while (i < n)
	{
		ss[i] = (char)c;
		i++;
	}
	s = (void *)ss;
	return (s);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char	s[50] = "MOMO";

// 	printf("%p\n", ft_memset(s, 'a', 2));
// 	printf("%p\n", memset(s, '.', 2));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:05:10 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:48:20 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	f_a(unsigned int i, char c)
{
	char	a;

	i = 0;
	a = c + i;
	return (a);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (t == 0)
		return (NULL);
	while (s[i])
	{
		t[i] = (*f)(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
// #include <stdio.h>
// int main()
// {
// 	const	char	s[10] = "Anne-Cha";

// 	printf("%s\n", ft_strmapi(s, &f_a));
// }

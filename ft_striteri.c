/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:03:30 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:48:05 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f_a(unsigned int i, char c)
{
	char	a;

	i = 0;
	a = c + i;
	return (a);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (*s != '\0')
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
// #include <stdio.h>
// int main()
// {
// 	const	char	s[10] = "Anne-Cha";

// 	printf("%\n", ft_striteri(s, &f_a));
// }

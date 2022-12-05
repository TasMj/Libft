/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:17:29 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/11 11:49:58 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	int		i;
	int		len_s;

	i = 0;
	len_s = ft_strlen(s);
	ss = (char *)malloc(sizeof(char) * len_s + 1);
	if (ss == 0)
		return (NULL);
	while (s[i])
	{
		ss[i] = s[i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	ss[10] = "allez";
// 	printf("%p\n", ft_strdup(ss));
// 	printf("%p\n", strdup(ss));
// }
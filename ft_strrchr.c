/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:11:54 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 22:11:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (c == '\0' && s[len] == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		else
			len--;
	}
	return (0);
}
// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char    s[10] = "atatatat";
//     char    s1[10] = "atatatat";

//     printf("%s\n", ft_strrchr(s, 't'));

//     printf("%s\n", strrchr(s1, 't'));
// }

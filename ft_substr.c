/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:57:02 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 15:38:00 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > start && start != 1)
		dest = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			dest[j++] = s[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	const char	s[10] = "abcdefgh";
// 	const char	s1[10] = "1234567";
// 	const char	s2[10] = "abcdefgh";

// 	printf("%s\n", ft_substr(s, 3, 2));
// 	printf("%s\n", ft_substr(s1, 3, 2));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:00:08 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/11 16:22:17 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		len_dest;

	i = ft_strlen(dest);
	j = 0;
	len_dest = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size != 0 && size >= len_dest)
		dest[i] = '\0';
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else
		return (len_dest + ft_strlen(src));
}
// #include<stdio.h>
// #include <bsd/string.h>
// int	main()
// {
// 	char	dest[10] = "1234AB";
// 	char	src[10] = "ABCD";
// 	char	dest1[10] = "1234AB";
// 	char	src1[10] = "ABCD";

// 	printf("%ld\n", ft_strlcat(dest, src, 0));
// 	printf("%ld\n", strlcat(dest1, src1, 0));
// }
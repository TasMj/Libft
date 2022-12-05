/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:38:35 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/18 18:44:41 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (!src || !dest)
		return (0);
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	char	src[10] = "---";
// 	char	dest[10] = "123456789";
// 	printf("%ld\n", ft_strlcpy(dest, src, 1));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:47:12 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/18 20:40:05 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*src1;
	size_t		i;

	dest1 = dest;
	src1 = src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

// #include<stdio.h>
// int main()
// {
// 	char dest[50] = "123456";
// 	const char src[45] = "++++++";

// 	printf("%p\n", ft_memcpy(dest, src, 2));
// 	printf("%s\n", dest);
// }
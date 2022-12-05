/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:21:08 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/11 12:22:53 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*tmp;
	size_t		i;

	dest1 = dest;
	tmp = src;
	i = 0;
	if (dest1 > tmp)
	{
		while (n-- > 0)
			dest1[n] = tmp[n];
	}
	else
	{
		while (i < n)
		{
			dest1[i] = tmp[i];
			i++;
		}
	}
	if (n == ft_strlen(src))
		dest1[i] = '\0';
	return (dest1);
}

// #include<stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[10] = "123456789";
// 	char src[10] = "+";

// 	char dest1[10] = "123456789";
// 	char src1[10] = "+";

// 	printf("%p\n", ft_memmove(dest, src, 0));
// 	printf("%s\n", dest);

// 	printf("%p\n", memmove(dest1, src1, 1));
// 	printf("%s\n", dest1);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:38:32 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 22:38:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i] && i < (n - 1))
		i++;
	return ((int)(ss1[i] - ss2[i]));
}
// #include<stdio.h>
// #include <string.h>
// int main()
// {
// 	char    s1[6] = "aaa";
// 	char    s2[6] = "aaa";

// 	char    s3[6] = "abab";
// 	char    s4[6] = "aaac";

// 	char    s5[6] = "apaaa";
// 	char    s6[6] = "aaaaaa";

// 	char    s7[6] = "aaa";
// 	char    s8[6] = "aba";

// 	printf("%d\n", ft_memcmp(s1, s2, 2));
// 	printf("%d\n\n", memcmp(s1, s2, 2));

// 	printf("%d\n", ft_memcmp(s3, s4, 2));
// 	printf("%d\n\n", memcmp(s3, s4, 2));

// 	printf("%d\n", ft_memcmp(s5, s6, 3));
// 	printf("%d\n\n", memcmp(s5, s6, 3));

// 	printf("%d\n", ft_memcmp(s7, s8, 2));
// 	printf("%d\n\n", memcmp(s7, s8, 2));
// }
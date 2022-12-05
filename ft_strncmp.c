/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 22:23:09 by marvin            #+#    #+#             */
/*   Updated: 2022/05/04 22:23:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*ss1;
	const char	*ss2;
	size_t		i;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] == ss2[i])
			i++;
		else
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include<stdio.h>
// int main()
// {
//     char    s1[6] = "aaa";
//     char    s2[6] = "aaa";

//     char    s3[6] = "aaab";
//     char    s4[6] = "aaa";

//     char    s5[6] = "baa";
//     char    s6[6] = "aaa";

//     char    s7[6] = "aaa";
//     char    s8[6] = "aba";

//     printf("%d\n", ft_strncmp(s1, s2, 2));
//     printf("%d\n\n", strncmp(s1, s2, 2));

//     printf("%d\n", ft_strncmp(s3, s4, 2));
//     printf("%d\n\n", strncmp(s3, s4, 2));

//     printf("%d\n", ft_strncmp(s5, s6, 2));
//     printf("%d\n\n", strncmp(s5, s6, 2));

//     printf("%d\n", ft_strncmp(s7, s8, 2));
//     printf("%d\n", strncmp(s7, s8, 2));
// }
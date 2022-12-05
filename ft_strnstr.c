/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:13:30 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/18 20:42:12 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big || !l)
		return (NULL);
	if (l[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && l[j] && i + j < len && big[i + j] == l[j])
			j++;
		if (!l[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// #include<stdio.h>
// #include <bsd/string.h>
// int	main()
// {
// 	char	big[18] = "BonjourLeS";
// 	char	little[18] = "jour";

// 	printf("%s\n", ft_strnstr(big, little, 3));
// 	//printf("la vraie : %s\n", strnstr(big, little, 2));
// }
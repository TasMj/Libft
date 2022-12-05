/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:07:50 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/18 20:38:31 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		res;
	int		i;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - 48);
		i++;
	}
	return (res * sign);
}
// #include<stdio.h>
// int main()
// {
// 	const char	s1[10] = "1234";
// 	const char	s2[10] = "    1234";
// 	const char	s3[10] = "    12  34";
// 	const char	s4[10] = "    +1234";
// 	const char	s5[10] = "-1234";
// 	const char	s6[10] = "ab1234";

// 	printf("%s = %d\n",s1, ft_atoi(s1));
// 	printf("%s = %d\n\n",s1, atoi(s1));

// 	printf("%s = %d\n",s2, ft_atoi(s2));
// 	printf("%s = %d\n\n",s2, atoi(s2));

// 	printf("%s = %d\n",s3, ft_atoi(s3));
// 	printf("%s = %d\n",s3, atoi(s3));

// 	printf("%s = %d\n",s4, ft_atoi(s4));
// 	printf("%s = %d\n\n",s4, atoi(s4));

// 	printf("%s = %d\n",s5, ft_atoi(s5));
// 	printf("%s = %d\n\n",s5, atoi(s5));

// 	printf("%s = %d\n",s6, ft_atoi(s6));
// 	printf("%s = %d\n",s6, atoi(s6));
// }
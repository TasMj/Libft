/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:02:17 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:43:39 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
// #include<stdio.h>
// int	main()
// {
// 	printf("%d", ft_isdigit('9'));
// 	printf("%d", ft_isdigit('0'));
// 	printf("%d", ft_isdigit('P'));
// }

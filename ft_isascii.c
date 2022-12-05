/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmejri <tmejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:19:19 by tmejri            #+#    #+#             */
/*   Updated: 2022/05/20 14:43:33 by tmejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include<stdio.h>

// int	main()
// {
// 	printf("%d", ft_isascii(56));
// 	printf("%d", ft_isascii(-8));
// 	printf("%d", ft_isascii(200));
// }
